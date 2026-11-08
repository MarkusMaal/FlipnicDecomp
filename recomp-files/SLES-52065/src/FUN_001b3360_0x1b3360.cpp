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

// Function: FUN_001b3360
// Address: 0x1b3360 - 0x1b33dc
void FUN_001b3360_0x1b3360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b3360_0x1b3360");
#endif

    switch (ctx->pc) {
        case 0x1b3374u: goto label_1b3374;
        default: break;
    }

    ctx->pc = 0x1b3360u;

    // 0x1b3360: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x1b3360u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x1b3364: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1b3364u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3368: 0x3468ffff  ori         $t0, $v1, 0xFFFF
    ctx->pc = 0x1b3368u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1b336c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1b336cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3370: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1b3370u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b3374:
    // 0x1b3374: 0x8b1821  addu        $v1, $a0, $t3
    ctx->pc = 0x1b3374u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
    // 0x1b3378: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x1b3378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x1b337c: 0x68082a  slt         $at, $v1, $t0
    ctx->pc = 0x1b337cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x1b3380: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B3380u;
    {
        const bool branch_taken_0x1b3380 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b3380) {
            ctx->pc = 0x1B3390u;
            goto label_1b3390;
        }
    }
    ctx->pc = 0x1B3388u;
    // 0x1b3388: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x1b3388u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b338c: 0x140482d  daddu       $t1, $t2, $zero
    ctx->pc = 0x1b338cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_1b3390:
    // 0x1b3390: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x1b3390u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x1b3394: 0x29430003  slti        $v1, $t2, 0x3
    ctx->pc = 0x1b3394u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1b3398: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x1B3398u;
    {
        const bool branch_taken_0x1b3398 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B339Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3398u;
        // 0x1b339c: 0x256b0010  addiu       $t3, $t3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3398) {
            ctx->pc = 0x1B3374u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b3374;
        }
    }
    ctx->pc = 0x1B33A0u;
    // 0x1b33a0: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x1b33a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b33a4: 0x3c083f80  lui         $t0, 0x3F80
    ctx->pc = 0x1b33a4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16256 << 16));
    // 0x1b33a8: 0x91900  sll         $v1, $t1, 4
    ctx->pc = 0x1b33a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x1b33ac: 0x44880800  mtc1        $t0, $f1
    ctx->pc = 0x1b33acu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b33b0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1b33b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1b33b4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b33b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1b33b8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1b33b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1b33bc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1b33bcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1b33c0: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1b33c0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1b33c4: 0x0  nop
    ctx->pc = 0x1b33c4u;
    // NOP
    // 0x1b33c8: 0xac64000c  sw          $a0, 0xC($v1)
    ctx->pc = 0x1b33c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
    // 0x1b33cc: 0xac650010  sw          $a1, 0x10($v1)
    ctx->pc = 0x1b33ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 5));
    // 0x1b33d0: 0xac660014  sw          $a2, 0x14($v1)
    ctx->pc = 0x1b33d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 6));
    // 0x1b33d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1B33D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B33D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B33D4u;
        // 0x1b33d8: 0xac670018  sw          $a3, 0x18($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B33D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B33DCu;
}
