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

// Function: entry_00136bc0
// Address: 0x136bc0 - 0x136c10
void entry_00136bc0_0x136bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00136bc0_0x136bc0");
#endif

    switch (ctx->pc) {
        case 0x136bc8u: goto label_136bc8;
        case 0x136bd0u: goto label_136bd0;
        default: break;
    }

    ctx->pc = 0x136bc0u;

    // 0x136bc0: 0xc053c54  jal         func_14F150
    ctx->pc = 0x136BC0u;
    SET_GPR_U32(ctx, 31, 0x136BC8u);
    ctx->pc = 0x136BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136BC0u;
    // 0x136bc4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F150u, 0x136BC0u, 0x136BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136BC8u;
label_136bc8:
    // 0x136bc8: 0xc060b8c  jal         func_182E30
    ctx->pc = 0x136BC8u;
    SET_GPR_U32(ctx, 31, 0x136BD0u);
    ctx->pc = 0x136BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136BC8u;
    // 0x136bcc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182E30u, 0x136BC8u, 0x136BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136BD0u;
label_136bd0:
    // 0x136bd0: 0x93828558  lbu         $v0, -0x7AA8($gp)
    ctx->pc = 0x136bd0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935896)));
    // 0x136bd4: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x136BD4u;
    {
        const bool branch_taken_0x136bd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x136BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136BD4u;
        // 0x136bd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136bd4) {
            ctx->pc = 0x136C58u;
            return;
        }
    }
    ctx->pc = 0x136BDCu;
    // 0x136bdc: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x136bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
    // 0x136be0: 0x27a50044  addiu       $a1, $sp, 0x44
    ctx->pc = 0x136be0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x136be4: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x136be4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x136be8: 0xafa20058  sw          $v0, 0x58($sp)
    ctx->pc = 0x136be8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
    // 0x136bec: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x136becu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x136bf0: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x136bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x136bf4: 0x8382857c  lb          $v0, -0x7A84($gp)
    ctx->pc = 0x136bf4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935932)));
    // 0x136bf8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x136BF8u;
    {
        const bool branch_taken_0x136bf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x136BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136BF8u;
        // 0x136bfc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136bf8) {
            ctx->pc = 0x136C10u;
            return;
        }
    }
    ctx->pc = 0x136C00u;
    // 0x136c00: 0x3c033f84  lui         $v1, 0x3F84
    ctx->pc = 0x136c00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16260 << 16));
    // 0x136c04: 0xa382857c  sb          $v0, -0x7A84($gp)
    ctx->pc = 0x136c04u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935932), (uint8_t)GPR_U32(ctx, 2));
    // 0x136c08: 0x34627ae1  ori         $v0, $v1, 0x7AE1
    ctx->pc = 0x136c08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)31457);
    // 0x136c0c: 0xaf828578  sw          $v0, -0x7A88($gp)
    ctx->pc = 0x136c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935928), GPR_U32(ctx, 2));
    ctx->pc = 0x136c10u;
}
