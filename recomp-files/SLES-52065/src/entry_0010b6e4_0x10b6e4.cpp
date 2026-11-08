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

// Function: entry_0010b6e4
// Address: 0x10b6e4 - 0x10b724
void entry_0010b6e4_0x10b6e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010b6e4_0x10b6e4");
#endif

    switch (ctx->pc) {
        case 0x10b6f4u: goto label_10b6f4;
        case 0x10b718u: goto label_10b718;
        default: break;
    }

    ctx->pc = 0x10b6e4u;

    // 0x10b6e4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x10b6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x10b6e8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x10b6e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x10b6ec: 0xc04c72c  jal         func_131CB0
    ctx->pc = 0x10B6ECu;
    SET_GPR_U32(ctx, 31, 0x10B6F4u);
    ctx->pc = 0x10B6F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B6ECu;
    // 0x10b6f0: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131CB0u, 0x10B6ECu, 0x10B6F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B6F4u;
label_10b6f4:
    // 0x10b6f4: 0x8e0543dc  lw          $a1, 0x43DC($s0)
    ctx->pc = 0x10b6f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 17372)));
    // 0x10b6f8: 0x4a0000a  bltz        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x10B6F8u;
    {
        const bool branch_taken_0x10b6f8 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x10B6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B6F8u;
        // 0x10b6fc: 0x3c023eae  lui         $v0, 0x3EAE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16046 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b6f8) {
            ctx->pc = 0x10B724u;
            return;
        }
    }
    ctx->pc = 0x10B700u;
    // 0x10b700: 0x8e0343d4  lw          $v1, 0x43D4($s0)
    ctx->pc = 0x10b700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 17364)));
    // 0x10b704: 0x8f8283a8  lw          $v0, -0x7C58($gp)
    ctx->pc = 0x10b704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935464)));
    // 0x10b708: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x10b708u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x10b70c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x10b70cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x10b710: 0xc046744  jal         func_119D10
    ctx->pc = 0x10B710u;
    SET_GPR_U32(ctx, 31, 0x10B718u);
    ctx->pc = 0x10B714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B710u;
    // 0x10b714: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119D10u, 0x10B710u, 0x10B718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B718u;
label_10b718:
    // 0x10b718: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x10b718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x10b71c: 0xae0243dc  sw          $v0, 0x43DC($s0)
    ctx->pc = 0x10b71cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 17372), GPR_U32(ctx, 2));
    // 0x10b720: 0x3c023eae  lui         $v0, 0x3EAE
    ctx->pc = 0x10b720u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16046 << 16));
    ctx->pc = 0x10b724u;
}
