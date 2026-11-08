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

// Function: FUN_0018b220
// Address: 0x18b220 - 0x18b2cc
void FUN_0018b220_0x18b220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0018b220_0x18b220");
#endif

    switch (ctx->pc) {
        case 0x18b258u: goto label_18b258;
        case 0x18b280u: goto label_18b280;
        default: break;
    }

    ctx->pc = 0x18b220u;

    // 0x18b220: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x18b220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x18b224: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x18b224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x18b228: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x18b228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x18b22c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x18b22cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x18b230: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x18b230u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b234: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x18b234u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x18b238: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x18b238u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b23c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x18b23cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x18b240: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x18b240u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b244: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18b244u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18b248: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x18b248u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b24c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18b24cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18b250: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x18b250u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b254: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x18b254u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18b258:
    // 0x18b258: 0x141240  sll         $v0, $s4, 9
    ctx->pc = 0x18b258u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 9));
    // 0x18b25c: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x18b25cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x18b260: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x18b260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x18b264: 0x80420acc  lb          $v0, 0xACC($v0)
    ctx->pc = 0x18b264u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 2764)));
    // 0x18b268: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x18B268u;
    {
        const bool branch_taken_0x18b268 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B268u;
        // 0x18b26c: 0x141140  sll         $v0, $s4, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b268) {
            ctx->pc = 0x18B290u;
            goto label_18b290;
        }
    }
    ctx->pc = 0x18B270u;
    // 0x18b270: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x18b270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x18b274: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x18b274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x18b278: 0xc077dc0  jal         func_1DF700
    ctx->pc = 0x18B278u;
    SET_GPR_U32(ctx, 31, 0x18B280u);
    ctx->pc = 0x18B27Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B278u;
    // 0x18b27c: 0x8c442acc  lw          $a0, 0x2ACC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10956)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DF700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DF700u, 0x18B278u, 0x18B280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B280u;
label_18b280:
    // 0x18b280: 0x16620003  bne         $s3, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18B280u;
    {
        const bool branch_taken_0x18b280 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x18b280) {
            ctx->pc = 0x18B290u;
            goto label_18b290;
        }
    }
    ctx->pc = 0x18B288u;
    // 0x18b288: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x18B288u;
    {
        const bool branch_taken_0x18b288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B288u;
        // 0x18b28c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b288) {
            ctx->pc = 0x18B2A8u;
            goto label_18b2a8;
        }
    }
    ctx->pc = 0x18B290u;
label_18b290:
    // 0x18b290: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x18b290u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x18b294: 0x26310040  addiu       $s1, $s1, 0x40
    ctx->pc = 0x18b294u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x18b298: 0x2a020008  slti        $v0, $s0, 0x8
    ctx->pc = 0x18b298u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x18b29c: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x18B29Cu;
    {
        const bool branch_taken_0x18b29c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18B2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B29Cu;
        // 0x18b2a0: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b29c) {
            ctx->pc = 0x18B258u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18b258;
        }
    }
    ctx->pc = 0x18B2A4u;
    // 0x18b2a4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x18b2a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18b2a8:
    // 0x18b2a8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x18b2a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18b2ac: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x18b2acu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18b2b0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x18b2b0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18b2b4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x18b2b4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18b2b8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x18b2b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18b2bc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18b2bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18b2c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18b2c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18b2c4: 0x3e00008  jr          $ra
    ctx->pc = 0x18B2C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18B2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B2C4u;
        // 0x18b2c8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18B2C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18B2CCu;
}
