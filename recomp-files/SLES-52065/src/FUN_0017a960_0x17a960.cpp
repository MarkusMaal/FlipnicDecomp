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

// Function: FUN_0017a960
// Address: 0x17a960 - 0x17a9f4
void FUN_0017a960_0x17a960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0017a960_0x17a960");
#endif

    switch (ctx->pc) {
        case 0x17a988u: goto label_17a988;
        case 0x17a990u: goto label_17a990;
        case 0x17a99cu: goto label_17a99c;
        case 0x17a9a4u: goto label_17a9a4;
        case 0x17a9c0u: goto label_17a9c0;
        default: break;
    }

    ctx->pc = 0x17a960u;

    // 0x17a960: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x17a960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x17a964: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x17a964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x17a968: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x17a968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x17a96c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x17a96cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x17a970: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x17a970u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a974: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x17a974u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x17a978: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17a978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17a97c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17a97cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17a980: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x17a980u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a984: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x17a984u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17a988:
    // 0x17a988: 0xc045b20  jal         func_116C80
    ctx->pc = 0x17A988u;
    SET_GPR_U32(ctx, 31, 0x17A990u);
    ctx->pc = 0x116C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C80u, 0x17A988u, 0x17A990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A990u;
label_17a990:
    // 0x17a990: 0x2919021  addu        $s2, $s4, $s1
    ctx->pc = 0x17a990u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
    // 0x17a994: 0xc045b20  jal         func_116C80
    ctx->pc = 0x17A994u;
    SET_GPR_U32(ctx, 31, 0x17A99Cu);
    ctx->pc = 0x17A998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A994u;
    // 0x17a998: 0xe6400220  swc1        $f0, 0x220($s2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 544), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x116C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C80u, 0x17A994u, 0x17A99Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A99Cu;
label_17a99c:
    // 0x17a99c: 0xc045b20  jal         func_116C80
    ctx->pc = 0x17A99Cu;
    SET_GPR_U32(ctx, 31, 0x17A9A4u);
    ctx->pc = 0x17A9A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A99Cu;
    // 0x17a9a0: 0xe6400224  swc1        $f0, 0x224($s2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 548), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x116C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C80u, 0x17A99Cu, 0x17A9A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A9A4u;
label_17a9a4:
    // 0x17a9a4: 0x26440220  addiu       $a0, $s2, 0x220
    ctx->pc = 0x17a9a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 544));
    // 0x17a9a8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x17a9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x17a9ac: 0xe6400228  swc1        $f0, 0x228($s2)
    ctx->pc = 0x17a9acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 552), bits); }
    // 0x17a9b0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x17a9b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a9b4: 0xae42022c  sw          $v0, 0x22C($s2)
    ctx->pc = 0x17a9b4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 556), GPR_U32(ctx, 2));
    // 0x17a9b8: 0xc07d312  jal         func_1F4C48
    ctx->pc = 0x17A9B8u;
    SET_GPR_U32(ctx, 31, 0x17A9C0u);
    ctx->pc = 0x17A9BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A9B8u;
    // 0x17a9bc: 0x2653022c  addiu       $s3, $s2, 0x22C (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 556));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4C48u, 0x17A9B8u, 0x17A9C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A9C0u;
label_17a9c0:
    // 0x17a9c0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x17a9c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x17a9c4: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x17a9c4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
    // 0x17a9c8: 0x2a030014  slti        $v1, $s0, 0x14
    ctx->pc = 0x17a9c8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x17a9cc: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x17A9CCu;
    {
        const bool branch_taken_0x17a9cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x17A9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A9CCu;
        // 0x17a9d0: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a9cc) {
            ctx->pc = 0x17A988u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17a988;
        }
    }
    ctx->pc = 0x17A9D4u;
    // 0x17a9d4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x17a9d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17a9d8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x17a9d8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17a9dc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x17a9dcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17a9e0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x17a9e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17a9e4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17a9e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17a9e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17a9e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17a9ec: 0x3e00008  jr          $ra
    ctx->pc = 0x17A9ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17A9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A9ECu;
        // 0x17a9f0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17A9ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17A9F4u;
}
