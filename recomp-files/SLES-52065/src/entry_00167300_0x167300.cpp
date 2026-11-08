#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_00167300
// Address: 0x167300 - 0x167320
void entry_00167300_0x167300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00167300_0x167300");
#endif

    switch (ctx->pc) {
        case 0x167318u: goto label_167318;
        default: break;
    }

    ctx->pc = 0x167300u;

    // 0x167300: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x167300u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x167304: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x167304u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167308: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x167308u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x16730c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x16730cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x167310: 0xc0425a4  jal         func_109690
    ctx->pc = 0x167310u;
    SET_GPR_U32(ctx, 31, 0x167318u);
    ctx->pc = 0x167314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167310u;
    // 0x167314: 0xae000200  sw          $zero, 0x200($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109690u, 0x167310u, 0x167318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167318u;
label_167318:
    // 0x167318: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x167318u;
    {
        const bool branch_taken_0x167318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x167318) {
            ctx->pc = 0x167360u;
            return;
        }
    }
    ctx->pc = 0x167320u;
}
