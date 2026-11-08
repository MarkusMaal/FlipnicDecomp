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

// Function: FUN_0019fda0
// Address: 0x19fda0 - 0x19fe74
void FUN_0019fda0_0x19fda0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0019fda0_0x19fda0");
#endif

    switch (ctx->pc) {
        case 0x19fe14u: goto label_19fe14;
        default: break;
    }

    ctx->pc = 0x19fda0u;

    // 0x19fda0: 0x2ca10012  sltiu       $at, $a1, 0x12
    ctx->pc = 0x19fda0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)18) ? 1 : 0);
    // 0x19fda4: 0x10200030  beqz        $at, . + 4 + (0x30 << 2)
    ctx->pc = 0x19FDA4u;
    {
        const bool branch_taken_0x19fda4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FDA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FDA4u;
        // 0x19fda8: 0x51880  sll         $v1, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fda4) {
            ctx->pc = 0x19FE68u;
            goto label_19fe68;
        }
    }
    ctx->pc = 0x19FDACu;
    // 0x19fdac: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x19fdacu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x19fdb0: 0x24a50340  addiu       $a1, $a1, 0x340
    ctx->pc = 0x19fdb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 832));
    // 0x19fdb4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x19fdb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x19fdb8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x19fdb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19fdbc: 0x600008  jr          $v1
    ctx->pc = 0x19FDBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19FDC4u: goto label_19fdc4;
            case 0x19FDCCu: goto label_19fdcc;
            case 0x19FDD4u: goto label_19fdd4;
            case 0x19FDDCu: goto label_19fddc;
            case 0x19FDE4u: goto label_19fde4;
            case 0x19FDF0u: goto label_19fdf0;
            case 0x19FDFCu: goto label_19fdfc;
            case 0x19FE28u: goto label_19fe28;
            case 0x19FE34u: goto label_19fe34;
            case 0x19FE40u: goto label_19fe40;
            case 0x19FE4Cu: goto label_19fe4c;
            case 0x19FE58u: goto label_19fe58;
            case 0x19FE60u: goto label_19fe60;
            case 0x19FE68u: goto label_19fe68;
            case 0x19FE6Cu: goto label_19fe6c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19FDBCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x19FDC4u;
label_19fdc4:
    // 0x19fdc4: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x19FDC4u;
    {
        const bool branch_taken_0x19fdc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FDC4u;
        // 0x19fdc8: 0xac860688  sw          $a2, 0x688($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1672), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fdc4) {
            ctx->pc = 0x19FE6Cu;
            goto label_19fe6c;
        }
    }
    ctx->pc = 0x19FDCCu;
label_19fdcc:
    // 0x19fdcc: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x19FDCCu;
    {
        const bool branch_taken_0x19fdcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FDCCu;
        // 0x19fdd0: 0xac86068c  sw          $a2, 0x68C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1676), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fdcc) {
            ctx->pc = 0x19FE6Cu;
            goto label_19fe6c;
        }
    }
    ctx->pc = 0x19FDD4u;
label_19fdd4:
    // 0x19fdd4: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x19FDD4u;
    {
        const bool branch_taken_0x19fdd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FDD4u;
        // 0x19fdd8: 0xac860690  sw          $a2, 0x690($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1680), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fdd4) {
            ctx->pc = 0x19FE6Cu;
            goto label_19fe6c;
        }
    }
    ctx->pc = 0x19FDDCu;
label_19fddc:
    // 0x19fddc: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x19FDDCu;
    {
        const bool branch_taken_0x19fddc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FDDCu;
        // 0x19fde0: 0xac860694  sw          $a2, 0x694($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1684), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fddc) {
            ctx->pc = 0x19FE6Cu;
            goto label_19fe6c;
        }
    }
    ctx->pc = 0x19FDE4u;
label_19fde4:
    // 0x19fde4: 0x8f838714  lw          $v1, -0x78EC($gp)
    ctx->pc = 0x19fde4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
    // 0x19fde8: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x19FDE8u;
    {
        const bool branch_taken_0x19fde8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FDE8u;
        // 0x19fdec: 0xac6628e4  sw          $a2, 0x28E4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 10468), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fde8) {
            ctx->pc = 0x19FE6Cu;
            goto label_19fe6c;
        }
    }
    ctx->pc = 0x19FDF0u;
label_19fdf0:
    // 0x19fdf0: 0x8f838714  lw          $v1, -0x78EC($gp)
    ctx->pc = 0x19fdf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
    // 0x19fdf4: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x19FDF4u;
    {
        const bool branch_taken_0x19fdf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FDF4u;
        // 0x19fdf8: 0xac6628f0  sw          $a2, 0x28F0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 10480), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fdf4) {
            ctx->pc = 0x19FE6Cu;
            goto label_19fe6c;
        }
    }
    ctx->pc = 0x19FDFCu;
label_19fdfc:
    // 0x19fdfc: 0x14c00005  bnez        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x19FDFCu;
    {
        const bool branch_taken_0x19fdfc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x19fdfc) {
            ctx->pc = 0x19FE14u;
            goto label_19fe14;
        }
    }
    ctx->pc = 0x19FE04u;
    // 0x19fe04: 0x8f838214  lw          $v1, -0x7DEC($gp)
    ctx->pc = 0x19fe04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935060)));
    // 0x19fe08: 0x8c630060  lw          $v1, 0x60($v1)
    ctx->pc = 0x19fe08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
    // 0x19fe0c: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x19FE0Cu;
    {
        const bool branch_taken_0x19fe0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FE0Cu;
        // 0x19fe10: 0xac6002dc  sw          $zero, 0x2DC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 732), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fe0c) {
            ctx->pc = 0x19FE6Cu;
            goto label_19fe6c;
        }
    }
    ctx->pc = 0x19FE14u;
label_19fe14:
    // 0x19fe14: 0x8f838214  lw          $v1, -0x7DEC($gp)
    ctx->pc = 0x19fe14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935060)));
    // 0x19fe18: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x19fe18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19fe1c: 0x8c630060  lw          $v1, 0x60($v1)
    ctx->pc = 0x19fe1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
    // 0x19fe20: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x19FE20u;
    {
        const bool branch_taken_0x19fe20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FE20u;
        // 0x19fe24: 0xac6402dc  sw          $a0, 0x2DC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 732), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fe20) {
            ctx->pc = 0x19FE6Cu;
            goto label_19fe6c;
        }
    }
    ctx->pc = 0x19FE28u;
label_19fe28:
    // 0x19fe28: 0x8f838714  lw          $v1, -0x78EC($gp)
    ctx->pc = 0x19fe28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
    // 0x19fe2c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x19FE2Cu;
    {
        const bool branch_taken_0x19fe2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FE2Cu;
        // 0x19fe30: 0xac6628e8  sw          $a2, 0x28E8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 10472), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fe2c) {
            ctx->pc = 0x19FE6Cu;
            goto label_19fe6c;
        }
    }
    ctx->pc = 0x19FE34u;
label_19fe34:
    // 0x19fe34: 0x8f838714  lw          $v1, -0x78EC($gp)
    ctx->pc = 0x19fe34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
    // 0x19fe38: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x19FE38u;
    {
        const bool branch_taken_0x19fe38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FE38u;
        // 0x19fe3c: 0xac6628dc  sw          $a2, 0x28DC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 10460), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fe38) {
            ctx->pc = 0x19FE6Cu;
            goto label_19fe6c;
        }
    }
    ctx->pc = 0x19FE40u;
label_19fe40:
    // 0x19fe40: 0x8f838714  lw          $v1, -0x78EC($gp)
    ctx->pc = 0x19fe40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
    // 0x19fe44: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x19FE44u;
    {
        const bool branch_taken_0x19fe44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FE44u;
        // 0x19fe48: 0xa066282b  sb          $a2, 0x282B($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 10283), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fe44) {
            ctx->pc = 0x19FE6Cu;
            goto label_19fe6c;
        }
    }
    ctx->pc = 0x19FE4Cu;
label_19fe4c:
    // 0x19fe4c: 0x8f838714  lw          $v1, -0x78EC($gp)
    ctx->pc = 0x19fe4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
    // 0x19fe50: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x19FE50u;
    {
        const bool branch_taken_0x19fe50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FE50u;
        // 0x19fe54: 0xac662830  sw          $a2, 0x2830($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 10288), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fe50) {
            ctx->pc = 0x19FE6Cu;
            goto label_19fe6c;
        }
    }
    ctx->pc = 0x19FE58u;
label_19fe58:
    // 0x19fe58: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x19FE58u;
    {
        const bool branch_taken_0x19fe58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FE58u;
        // 0x19fe5c: 0xac860698  sw          $a2, 0x698($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1688), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fe58) {
            ctx->pc = 0x19FE6Cu;
            goto label_19fe6c;
        }
    }
    ctx->pc = 0x19FE60u;
label_19fe60:
    // 0x19fe60: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x19FE60u;
    {
        const bool branch_taken_0x19fe60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FE60u;
        // 0x19fe64: 0xac8606a0  sw          $a2, 0x6A0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1696), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fe60) {
            ctx->pc = 0x19FE6Cu;
            goto label_19fe6c;
        }
    }
    ctx->pc = 0x19FE68u;
label_19fe68:
    // 0x19fe68: 0xac860320  sw          $a2, 0x320($a0)
    ctx->pc = 0x19fe68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 800), GPR_U32(ctx, 6));
label_19fe6c:
    // 0x19fe6c: 0x3e00008  jr          $ra
    ctx->pc = 0x19FE6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19FE6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19FE74u;
}
