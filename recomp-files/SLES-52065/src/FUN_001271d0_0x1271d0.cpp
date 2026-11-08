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

// Function: FUN_001271d0
// Address: 0x1271d0 - 0x127244
void FUN_001271d0_0x1271d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001271d0_0x1271d0");
#endif

    switch (ctx->pc) {
        case 0x12720cu: goto label_12720c;
        case 0x127224u: goto label_127224;
        default: break;
    }

    ctx->pc = 0x1271d0u;

    // 0x1271d0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1271d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1271d4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1271d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1271d8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1271d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1271dc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1271dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1271e0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1271e0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1271e4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1271e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1271e8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1271e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1271ec: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1271ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1271f0: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x1271F0u;
    {
        const bool branch_taken_0x1271f0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1271F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1271F0u;
        // 0x1271f4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1271f0) {
            ctx->pc = 0x127224u;
            goto label_127224;
        }
    }
    ctx->pc = 0x1271F8u;
    // 0x1271f8: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1271f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1271fc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1271fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x127200: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x127200u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x127204: 0xc048afc  jal         func_122BF0
    ctx->pc = 0x127204u;
    SET_GPR_U32(ctx, 31, 0x12720Cu);
    ctx->pc = 0x127208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127204u;
    // 0x127208: 0x2112821  addu        $a1, $s0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122BF0u, 0x127204u, 0x12720Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12720Cu;
label_12720c:
    // 0x12720c: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x12720cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x127210: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x127210u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127214: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x127214u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127218: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x127218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x12721c: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x12721Cu;
    SET_GPR_U32(ctx, 31, 0x127224u);
    ctx->pc = 0x127220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12721Cu;
    // 0x127220: 0x502021  addu        $a0, $v0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x12721Cu, 0x127224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127224u;
label_127224:
    // 0x127224: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x127224u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127228: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x127228u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x12722c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x12722cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x127230: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x127230u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x127234: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x127234u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x127238: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x127238u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12723c: 0x3e00008  jr          $ra
    ctx->pc = 0x12723Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x127240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12723Cu;
        // 0x127240: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12723Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x127244u;
}
