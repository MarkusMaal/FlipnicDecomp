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

// Function: entry_0016817c
// Address: 0x16817c - 0x16819c
void entry_0016817c_0x16817c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016817c_0x16817c");
#endif

    switch (ctx->pc) {
        case 0x168194u: goto label_168194;
        default: break;
    }

    ctx->pc = 0x16817cu;

    // 0x16817c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x16817cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x168180: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x168180u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168184: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x168184u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x168188: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x168188u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x16818c: 0xc0425a4  jal         func_109690
    ctx->pc = 0x16818Cu;
    SET_GPR_U32(ctx, 31, 0x168194u);
    ctx->pc = 0x168190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16818Cu;
    // 0x168190: 0xae000200  sw          $zero, 0x200($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109690u, 0x16818Cu, 0x168194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168194u;
label_168194:
    // 0x168194: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x168194u;
    {
        const bool branch_taken_0x168194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x168194) {
            ctx->pc = 0x1681DCu;
            return;
        }
    }
    ctx->pc = 0x16819Cu;
}
