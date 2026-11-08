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

// Function: FUN_0018b0c0
// Address: 0x18b0c0 - 0x18b154
void FUN_0018b0c0_0x18b0c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0018b0c0_0x18b0c0");
#endif

    switch (ctx->pc) {
        case 0x18b0f0u: goto label_18b0f0;
        case 0x18b11cu: goto label_18b11c;
        default: break;
    }

    ctx->pc = 0x18b0c0u;

    // 0x18b0c0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x18b0c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x18b0c4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x18b0c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x18b0c8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x18b0c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x18b0cc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x18b0ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x18b0d0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x18b0d0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b0d4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x18b0d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x18b0d8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x18b0d8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b0dc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18b0dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18b0e0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x18b0e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b0e4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18b0e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18b0e8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x18b0e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b0ec: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x18b0ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18b0f0:
    // 0x18b0f0: 0x131a40  sll         $v1, $s3, 9
    ctx->pc = 0x18b0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 9));
    // 0x18b0f4: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x18b0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x18b0f8: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x18b0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x18b0fc: 0x80630acc  lb          $v1, 0xACC($v1)
    ctx->pc = 0x18b0fcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 2764)));
    // 0x18b100: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x18B100u;
    {
        const bool branch_taken_0x18b100 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b100) {
            ctx->pc = 0x18B11Cu;
            goto label_18b11c;
        }
    }
    ctx->pc = 0x18B108u;
    // 0x18b108: 0x131140  sll         $v0, $s3, 5
    ctx->pc = 0x18b108u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 5));
    // 0x18b10c: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x18b10cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x18b110: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x18b110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x18b114: 0xc077d70  jal         func_1DF5C0
    ctx->pc = 0x18B114u;
    SET_GPR_U32(ctx, 31, 0x18B11Cu);
    ctx->pc = 0x18B118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B114u;
    // 0x18b118: 0x8c442acc  lw          $a0, 0x2ACC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10956)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DF5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DF5C0u, 0x18B114u, 0x18B11Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B11Cu;
label_18b11c:
    // 0x18b11c: 0x0  nop
    ctx->pc = 0x18b11cu;
    // NOP
    // 0x18b120: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x18b120u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x18b124: 0x2a030008  slti        $v1, $s0, 0x8
    ctx->pc = 0x18b124u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x18b128: 0x26310040  addiu       $s1, $s1, 0x40
    ctx->pc = 0x18b128u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x18b12c: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x18B12Cu;
    {
        const bool branch_taken_0x18b12c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18B130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B12Cu;
        // 0x18b130: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b12c) {
            ctx->pc = 0x18B0F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18b0f0;
        }
    }
    ctx->pc = 0x18B134u;
    // 0x18b134: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x18b134u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18b138: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x18b138u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18b13c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x18b13cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18b140: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x18b140u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18b144: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18b144u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18b148: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18b148u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18b14c: 0x3e00008  jr          $ra
    ctx->pc = 0x18B14Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18B150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B14Cu;
        // 0x18b150: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18B14Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18B154u;
}
