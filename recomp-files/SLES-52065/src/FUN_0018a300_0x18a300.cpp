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

// Function: FUN_0018a300
// Address: 0x18a300 - 0x18a3b4
void FUN_0018a300_0x18a300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0018a300_0x18a300");
#endif

    switch (ctx->pc) {
        case 0x18a310u: goto label_18a310;
        default: break;
    }

    ctx->pc = 0x18a300u;

    // 0x18a300: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x18a300u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a304: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x18a304u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x18a308: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x18A308u;
    {
        const bool branch_taken_0x18a308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A308u;
        // 0x18a30c: 0x2403000d  addiu       $v1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a308) {
            ctx->pc = 0x18A37Cu;
            goto label_18a37c;
        }
    }
    ctx->pc = 0x18A310u;
label_18a310:
    // 0x18a310: 0x11060005  beq         $t0, $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x18A310u;
    {
        const bool branch_taken_0x18a310 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 6));
        ctx->pc = 0x18A314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A310u;
        // 0x18a314: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a310) {
            ctx->pc = 0x18A328u;
            goto label_18a328;
        }
    }
    ctx->pc = 0x18A318u;
    // 0x18a318: 0x11030003  beq         $t0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18A318u;
    {
        const bool branch_taken_0x18a318 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 3));
        if (branch_taken_0x18a318) {
            ctx->pc = 0x18A328u;
            goto label_18a328;
        }
    }
    ctx->pc = 0x18A320u;
    // 0x18a320: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x18A320u;
    {
        const bool branch_taken_0x18a320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A320u;
        // 0x18a324: 0x29020081  slti        $v0, $t0, 0x81 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)129) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a320) {
            ctx->pc = 0x18A33Cu;
            goto label_18a33c;
        }
    }
    ctx->pc = 0x18A328u;
label_18a328:
    // 0x18a328: 0x44870800  mtc1        $a3, $f1
    ctx->pc = 0x18a328u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18a32c: 0xc4800040  lwc1        $f0, 0x40($a0)
    ctx->pc = 0x18a32cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18a330: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x18a330u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x18a334: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x18A334u;
    {
        const bool branch_taken_0x18a334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A334u;
        // 0x18a338: 0x46000802  mul.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a334) {
            ctx->pc = 0x18A3ACu;
            goto label_18a3ac;
        }
    }
    ctx->pc = 0x18A33Cu;
label_18a33c:
    // 0x18a33c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18A33Cu;
    {
        const bool branch_taken_0x18a33c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18A340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A33Cu;
        // 0x18a340: 0x290100a0  slti        $at, $t0, 0xA0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)160) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a33c) {
            ctx->pc = 0x18A34Cu;
            goto label_18a34c;
        }
    }
    ctx->pc = 0x18A344u;
    // 0x18a344: 0x14200007  bnez        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x18A344u;
    {
        const bool branch_taken_0x18a344 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x18a344) {
            ctx->pc = 0x18A364u;
            goto label_18a364;
        }
    }
    ctx->pc = 0x18A34Cu;
label_18a34c:
    // 0x18a34c: 0x0  nop
    ctx->pc = 0x18a34cu;
    // NOP
    // 0x18a350: 0x290200e0  slti        $v0, $t0, 0xE0
    ctx->pc = 0x18a350u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)224) ? 1 : 0);
    // 0x18a354: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x18A354u;
    {
        const bool branch_taken_0x18a354 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18A358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A354u;
        // 0x18a358: 0x290100fd  slti        $at, $t0, 0xFD (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)253) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a354) {
            ctx->pc = 0x18A374u;
            goto label_18a374;
        }
    }
    ctx->pc = 0x18A35Cu;
    // 0x18a35c: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x18A35Cu;
    {
        const bool branch_taken_0x18a35c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x18a35c) {
            ctx->pc = 0x18A374u;
            goto label_18a374;
        }
    }
    ctx->pc = 0x18A364u;
label_18a364:
    // 0x18a364: 0x0  nop
    ctx->pc = 0x18a364u;
    // NOP
    // 0x18a368: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x18a368u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x18a36c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x18A36Cu;
    {
        const bool branch_taken_0x18a36c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A36Cu;
        // 0x18a370: 0x24e70011  addiu       $a3, $a3, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a36c) {
            ctx->pc = 0x18A37Cu;
            goto label_18a37c;
        }
    }
    ctx->pc = 0x18A374u;
label_18a374:
    // 0x18a374: 0x0  nop
    ctx->pc = 0x18a374u;
    // NOP
    // 0x18a378: 0x24e70009  addiu       $a3, $a3, 0x9
    ctx->pc = 0x18a378u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 9));
label_18a37c:
    // 0x18a37c: 0x0  nop
    ctx->pc = 0x18a37cu;
    // NOP
    // 0x18a380: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x18a380u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x18a384: 0x1440ffe2  bnez        $v0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x18A384u;
    {
        const bool branch_taken_0x18a384 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18A388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A384u;
        // 0x18a388: 0x304800ff  andi        $t0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a384) {
            ctx->pc = 0x18A310u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18a310;
        }
    }
    ctx->pc = 0x18A38Cu;
    // 0x18a38c: 0x30e20001  andi        $v0, $a3, 0x1
    ctx->pc = 0x18a38cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
    // 0x18a390: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x18A390u;
    {
        const bool branch_taken_0x18a390 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18a390) {
            ctx->pc = 0x18A39Cu;
            goto label_18a39c;
        }
    }
    ctx->pc = 0x18A398u;
    // 0x18a398: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x18a398u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_18a39c:
    // 0x18a39c: 0x44870800  mtc1        $a3, $f1
    ctx->pc = 0x18a39cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18a3a0: 0xc4800040  lwc1        $f0, 0x40($a0)
    ctx->pc = 0x18a3a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18a3a4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x18a3a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x18a3a8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x18a3a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_18a3ac:
    // 0x18a3ac: 0x3e00008  jr          $ra
    ctx->pc = 0x18A3ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18A3ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18A3B4u;
}
