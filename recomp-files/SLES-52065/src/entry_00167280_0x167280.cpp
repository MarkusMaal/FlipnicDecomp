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

// Function: entry_00167280
// Address: 0x167280 - 0x1672ac
void entry_00167280_0x167280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00167280_0x167280");
#endif

    switch (ctx->pc) {
        case 0x167288u: goto label_167288;
        case 0x16729cu: goto label_16729c;
        default: break;
    }

    ctx->pc = 0x167280u;

    // 0x167280: 0xc042118  jal         func_108460
    ctx->pc = 0x167280u;
    SET_GPR_U32(ctx, 31, 0x167288u);
    ctx->pc = 0x167284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167280u;
    // 0x167284: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x167280u, 0x167288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167288u;
label_167288:
    // 0x167288: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x167288u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x16728c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16728cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167290: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x167290u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x167294: 0xc0425a4  jal         func_109690
    ctx->pc = 0x167294u;
    SET_GPR_U32(ctx, 31, 0x16729Cu);
    ctx->pc = 0x167298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167294u;
    // 0x167298: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109690u, 0x167294u, 0x16729Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16729Cu;
label_16729c:
    // 0x16729c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x16729cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1672a0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1672a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1672a4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1672A4u;
    {
        const bool branch_taken_0x1672a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1672A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1672A4u;
        // 0x1672a8: 0xa064002b  sb          $a0, 0x2B($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 43), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1672a4) {
            ctx->pc = 0x1672D8u;
            return;
        }
    }
    ctx->pc = 0x1672ACu;
}
