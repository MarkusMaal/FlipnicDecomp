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

// Function: FUN_0018b160
// Address: 0x18b160 - 0x18b218
void FUN_0018b160_0x18b160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0018b160_0x18b160");
#endif

    switch (ctx->pc) {
        case 0x18b194u: goto label_18b194;
        case 0x18b1a0u: goto label_18b1a0;
        case 0x18b1c4u: goto label_18b1c4;
        default: break;
    }

    ctx->pc = 0x18b160u;

    // 0x18b160: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x18b160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x18b164: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x18b164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x18b168: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x18b168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x18b16c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x18b16cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x18b170: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x18b170u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b174: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x18b174u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x18b178: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x18b178u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b17c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x18b17cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x18b180: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x18b180u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b184: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x18b184u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x18b188: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18b188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18b18c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18b18cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18b190: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x18b190u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18b194:
    // 0x18b194: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x18b194u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b198: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x18b198u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b19c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x18b19cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18b1a0:
    // 0x18b1a0: 0x2d41821  addu        $v1, $s6, $s4
    ctx->pc = 0x18b1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 20)));
    // 0x18b1a4: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x18b1a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x18b1a8: 0x80630acc  lb          $v1, 0xACC($v1)
    ctx->pc = 0x18b1a8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 2764)));
    // 0x18b1ac: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x18B1ACu;
    {
        const bool branch_taken_0x18b1ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b1ac) {
            ctx->pc = 0x18B1C4u;
            goto label_18b1c4;
        }
    }
    ctx->pc = 0x18B1B4u;
    // 0x18b1b4: 0x2d51021  addu        $v0, $s6, $s5
    ctx->pc = 0x18b1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 21)));
    // 0x18b1b8: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x18b1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x18b1bc: 0xc077d70  jal         func_1DF5C0
    ctx->pc = 0x18B1BCu;
    SET_GPR_U32(ctx, 31, 0x18B1C4u);
    ctx->pc = 0x18B1C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B1BCu;
    // 0x18b1c0: 0x8c442acc  lw          $a0, 0x2ACC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10956)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DF5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DF5C0u, 0x18B1BCu, 0x18B1C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B1C4u;
label_18b1c4:
    // 0x18b1c4: 0x0  nop
    ctx->pc = 0x18b1c4u;
    // NOP
    // 0x18b1c8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18b1c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18b1cc: 0x2a230008  slti        $v1, $s1, 0x8
    ctx->pc = 0x18b1ccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x18b1d0: 0x26520040  addiu       $s2, $s2, 0x40
    ctx->pc = 0x18b1d0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x18b1d4: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x18B1D4u;
    {
        const bool branch_taken_0x18b1d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18B1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B1D4u;
        // 0x18b1d8: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b1d4) {
            ctx->pc = 0x18B1A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18b1a0;
        }
    }
    ctx->pc = 0x18B1DCu;
    // 0x18b1dc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x18b1dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x18b1e0: 0x26940200  addiu       $s4, $s4, 0x200
    ctx->pc = 0x18b1e0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 512));
    // 0x18b1e4: 0x2a030010  slti        $v1, $s0, 0x10
    ctx->pc = 0x18b1e4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x18b1e8: 0x1460ffea  bnez        $v1, . + 4 + (-0x16 << 2)
    ctx->pc = 0x18B1E8u;
    {
        const bool branch_taken_0x18b1e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18B1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B1E8u;
        // 0x18b1ec: 0x26b50020  addiu       $s5, $s5, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b1e8) {
            ctx->pc = 0x18B194u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18b194;
        }
    }
    ctx->pc = 0x18B1F0u;
    // 0x18b1f0: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x18b1f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x18b1f4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x18b1f4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18b1f8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x18b1f8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18b1fc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x18b1fcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18b200: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x18b200u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18b204: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x18b204u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18b208: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18b208u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18b20c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18b20cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18b210: 0x3e00008  jr          $ra
    ctx->pc = 0x18B210u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18B214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B210u;
        // 0x18b214: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18B210u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18B218u;
}
