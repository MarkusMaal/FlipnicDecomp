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

// Function: FUN_0018b480
// Address: 0x18b480 - 0x18b530
void FUN_0018b480_0x18b480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0018b480_0x18b480");
#endif

    switch (ctx->pc) {
        case 0x18b4b0u: goto label_18b4b0;
        case 0x18b4b8u: goto label_18b4b8;
        case 0x18b4ccu: goto label_18b4cc;
        default: break;
    }

    ctx->pc = 0x18b480u;

    // 0x18b480: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x18b480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x18b484: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x18b484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x18b488: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x18b488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x18b48c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x18b48cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x18b490: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x18b490u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b494: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x18b494u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x18b498: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x18b498u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b49c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x18b49cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x18b4a0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x18b4a0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b4a4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18b4a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18b4a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18b4a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18b4ac: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x18b4acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18b4b0:
    // 0x18b4b0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x18b4b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b4b4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x18b4b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18b4b8:
    // 0x18b4b8: 0x2b31021  addu        $v0, $s5, $s3
    ctx->pc = 0x18b4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 19)));
    // 0x18b4bc: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x18b4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x18b4c0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x18b4c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b4c4: 0xc0806b0  jal         func_201AC0
    ctx->pc = 0x18B4C4u;
    SET_GPR_U32(ctx, 31, 0x18B4CCu);
    ctx->pc = 0x18B4C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B4C4u;
    // 0x18b4c8: 0x24440acc  addiu       $a0, $v0, 0xACC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2764));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201AC0u, 0x18B4C4u, 0x18B4CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B4CCu;
label_18b4cc:
    // 0x18b4cc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x18B4CCu;
    {
        const bool branch_taken_0x18b4cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18B4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B4CCu;
        // 0x18b4d0: 0x101940  sll         $v1, $s0, 5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b4cc) {
            ctx->pc = 0x18B4E8u;
            goto label_18b4e8;
        }
    }
    ctx->pc = 0x18B4D4u;
    // 0x18b4d4: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x18b4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x18b4d8: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x18b4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x18b4dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18b4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18b4e0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x18B4E0u;
    {
        const bool branch_taken_0x18b4e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B4E0u;
        // 0x18b4e4: 0x8c422acc  lw          $v0, 0x2ACC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10956)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b4e0) {
            ctx->pc = 0x18B50Cu;
            goto label_18b50c;
        }
    }
    ctx->pc = 0x18B4E8u;
label_18b4e8:
    // 0x18b4e8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18b4e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18b4ec: 0x2a220008  slti        $v0, $s1, 0x8
    ctx->pc = 0x18b4ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x18b4f0: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x18B4F0u;
    {
        const bool branch_taken_0x18b4f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18B4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B4F0u;
        // 0x18b4f4: 0x26520040  addiu       $s2, $s2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b4f0) {
            ctx->pc = 0x18B4B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18b4b8;
        }
    }
    ctx->pc = 0x18B4F8u;
    // 0x18b4f8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x18b4f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x18b4fc: 0x2a020010  slti        $v0, $s0, 0x10
    ctx->pc = 0x18b4fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x18b500: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x18B500u;
    {
        const bool branch_taken_0x18b500 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18B504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B500u;
        // 0x18b504: 0x26730200  addiu       $s3, $s3, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b500) {
            ctx->pc = 0x18B4B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18b4b0;
        }
    }
    ctx->pc = 0x18B508u;
    // 0x18b508: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x18b508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_18b50c:
    // 0x18b50c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x18b50cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18b510: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x18b510u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18b514: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x18b514u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18b518: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x18b518u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18b51c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x18b51cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18b520: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18b520u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18b524: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18b524u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18b528: 0x3e00008  jr          $ra
    ctx->pc = 0x18B528u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18B52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B528u;
        // 0x18b52c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18B528u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18B530u;
}
