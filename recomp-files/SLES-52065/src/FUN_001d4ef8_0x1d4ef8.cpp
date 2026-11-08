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

// Function: FUN_001d4ef8
// Address: 0x1d4ef8 - 0x1d4f84
void FUN_001d4ef8_0x1d4ef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001d4ef8_0x1d4ef8");
#endif

    switch (ctx->pc) {
        case 0x1d4f28u: goto label_1d4f28;
        case 0x1d4f40u: goto label_1d4f40;
        case 0x1d4f64u: goto label_1d4f64;
        default: break;
    }

    ctx->pc = 0x1d4ef8u;

    // 0x1d4ef8: 0x240209e4  addiu       $v0, $zero, 0x9E4
    ctx->pc = 0x1d4ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2532));
    // 0x1d4efc: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x1d4efcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x1d4f00: 0x821818  mult        $v1, $a0, $v0
    ctx->pc = 0x1d4f00u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1d4f04: 0xffb000c0  sd          $s0, 0xC0($sp)
    ctx->pc = 0x1d4f04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 16));
    // 0x1d4f08: 0xffb100c8  sd          $s1, 0xC8($sp)
    ctx->pc = 0x1d4f08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 17));
    // 0x1d4f0c: 0xffb200d0  sd          $s2, 0xD0($sp)
    ctx->pc = 0x1d4f0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 18));
    // 0x1d4f10: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1d4f10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1d4f14: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1d4f14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1d4f18: 0x8ca5055c  lw          $a1, 0x55C($a1)
    ctx->pc = 0x1d4f18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1372)));
    // 0x1d4f1c: 0xffbf00d8  sd          $ra, 0xD8($sp)
    ctx->pc = 0x1d4f1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 216), GPR_U64(ctx, 31));
    // 0x1d4f20: 0xc0772f8  jal         func_1DCBE0
    ctx->pc = 0x1D4F20u;
    SET_GPR_U32(ctx, 31, 0x1D4F28u);
    ctx->pc = 0x1D4F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4F20u;
    // 0x1d4f24: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCBE0u, 0x1D4F20u, 0x1D4F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4F28u;
label_1d4f28:
    // 0x1d4f28: 0x2450ffff  addiu       $s0, $v0, -0x1
    ctx->pc = 0x1d4f28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1d4f2c: 0x600000f  bltz        $s0, . + 4 + (0xF << 2)
    ctx->pc = 0x1D4F2Cu;
    {
        const bool branch_taken_0x1d4f2c = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x1D4F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4F2Cu;
        // 0x1d4f30: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4f2c) {
            ctx->pc = 0x1D4F6Cu;
            goto label_1d4f6c;
        }
    }
    ctx->pc = 0x1D4F34u;
    // 0x1d4f34: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x1d4f34u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d4f38: 0x5d8821  addu        $s1, $v0, $sp
    ctx->pc = 0x1d4f38u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1d4f3c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1d4f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1d4f40:
    // 0x1d4f40: 0x2631fffc  addiu       $s1, $s1, -0x4
    ctx->pc = 0x1d4f40u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
    // 0x1d4f44: 0x28430018  slti        $v1, $v0, 0x18
    ctx->pc = 0x1d4f44u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x1d4f48: 0x2446ffe8  addiu       $a2, $v0, -0x18
    ctx->pc = 0x1d4f48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967272));
    // 0x1d4f4c: 0x522804  sllv        $a1, $s2, $v0
    ctx->pc = 0x1d4f4cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), GPR_U32(ctx, 2) & 0x1F));
    // 0x1d4f50: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D4F50u;
    {
        const bool branch_taken_0x1d4f50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D4F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4F50u;
        // 0x1d4f54: 0x38640001  xori        $a0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4f50) {
            ctx->pc = 0x1D4F5Cu;
            goto label_1d4f5c;
        }
    }
    ctx->pc = 0x1D4F58u;
    // 0x1d4f58: 0xd22804  sllv        $a1, $s2, $a2
    ctx->pc = 0x1d4f58u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), GPR_U32(ctx, 6) & 0x1F));
label_1d4f5c:
    // 0x1d4f5c: 0xc077818  jal         func_1DE060
    ctx->pc = 0x1D4F5Cu;
    SET_GPR_U32(ctx, 31, 0x1D4F64u);
    ctx->pc = 0x1D4F60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4F5Cu;
    // 0x1d4f60: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE060u, 0x1D4F5Cu, 0x1D4F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4F64u;
label_1d4f64:
    // 0x1d4f64: 0x603fff6  bgezl       $s0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1D4F64u;
    {
        const bool branch_taken_0x1d4f64 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x1d4f64) {
            ctx->pc = 0x1D4F68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D4F64u;
            // 0x1d4f68: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D4F40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d4f40;
        }
    }
    ctx->pc = 0x1D4F6Cu;
label_1d4f6c:
    // 0x1d4f6c: 0xdfb000c0  ld          $s0, 0xC0($sp)
    ctx->pc = 0x1d4f6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1d4f70: 0xdfb100c8  ld          $s1, 0xC8($sp)
    ctx->pc = 0x1d4f70u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1d4f74: 0xdfb200d0  ld          $s2, 0xD0($sp)
    ctx->pc = 0x1d4f74u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1d4f78: 0xdfbf00d8  ld          $ra, 0xD8($sp)
    ctx->pc = 0x1d4f78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1d4f7c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D4F7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D4F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4F7Cu;
        // 0x1d4f80: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D4F7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D4F84u;
}
