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

// Function: entry_0014c934
// Address: 0x14c934 - 0x14c9c8
void entry_0014c934_0x14c934(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014c934_0x14c934");
#endif

    switch (ctx->pc) {
        case 0x14c950u: goto label_14c950;
        case 0x14c970u: goto label_14c970;
        case 0x14c984u: goto label_14c984;
        case 0x14c9a8u: goto label_14c9a8;
        default: break;
    }

    ctx->pc = 0x14c934u;

label_14c934:
    // 0x14c934: 0x8e4200c8  lw          $v0, 0xC8($s2)
    ctx->pc = 0x14c934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 200)));
label_14c938:
    // 0x14c938: 0x111840  sll         $v1, $s1, 1
    ctx->pc = 0x14c938u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
label_14c93c:
    // 0x14c93c: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x14c93cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_14c940:
    // 0x14c940: 0x38080  sll         $s0, $v1, 2
    ctx->pc = 0x14c940u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_14c944:
    // 0x14c944: 0x509821  addu        $s3, $v0, $s0
    ctx->pc = 0x14c944u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_14c948:
    // 0x14c948: 0xc049ed0  jal         func_127B40
label_14c94c:
    if (ctx->pc == 0x14C94Cu) {
        ctx->pc = 0x14C94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C948u;
        // 0x14c94c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14C950u;
        goto label_14c950;
    }
    ctx->pc = 0x14C948u;
    SET_GPR_U32(ctx, 31, 0x14C950u);
    ctx->pc = 0x14C94Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C948u;
    // 0x14c94c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127B40u, 0x14C948u, 0x14C950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C950u;
label_14c950:
    // 0x14c950: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x14c950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_14c954:
    // 0x14c954: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x14c954u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_14c958:
    // 0x14c958: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x14c958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_14c95c:
    // 0x14c95c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x14c95cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14c960:
    // 0x14c960: 0x27a7005c  addiu       $a3, $sp, 0x5C
    ctx->pc = 0x14c960u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
label_14c964:
    // 0x14c964: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x14c964u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_14c968:
    // 0x14c968: 0xc0484ec  jal         func_1213B0
label_14c96c:
    if (ctx->pc == 0x14C96Cu) {
        ctx->pc = 0x14C96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C968u;
        // 0x14c96c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14C970u;
        goto label_14c970;
    }
    ctx->pc = 0x14C968u;
    SET_GPR_U32(ctx, 31, 0x14C970u);
    ctx->pc = 0x14C96Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C968u;
    // 0x14c96c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1213B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1213B0u, 0x14C968u, 0x14C970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C970u;
label_14c970:
    // 0x14c970: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x14c970u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_14c974:
    // 0x14c974: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x14c974u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_14c978:
    // 0x14c978: 0x8f3900cc  lw          $t9, 0xCC($t9)
    ctx->pc = 0x14c978u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 204)));
label_14c97c:
    // 0x14c97c: 0x320f809  jalr        $t9
label_14c980:
    if (ctx->pc == 0x14C980u) {
        ctx->pc = 0x14C980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C97Cu;
        // 0x14c980: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14C984u;
        goto label_14c984;
    }
    ctx->pc = 0x14C97Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x14C984u);
        ctx->pc = 0x14C980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C97Cu;
        // 0x14c980: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14C97Cu, 0x14C984u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14C984u;
label_14c984:
    // 0x14c984: 0x8e4200d4  lw          $v0, 0xD4($s2)
    ctx->pc = 0x14c984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
label_14c988:
    // 0x14c988: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x14c988u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14c98c:
    // 0x14c98c: 0x27a70060  addiu       $a3, $sp, 0x60
    ctx->pc = 0x14c98cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_14c990:
    // 0x14c990: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x14c990u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_14c994:
    // 0x14c994: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x14c994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_14c998:
    // 0x14c998: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x14c998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_14c99c:
    // 0x14c99c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x14c99cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_14c9a0:
    // 0x14c9a0: 0xc053658  jal         func_14D960
label_14c9a4:
    if (ctx->pc == 0x14C9A4u) {
        ctx->pc = 0x14C9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C9A0u;
        // 0x14c9a4: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14C9A8u;
        goto label_14c9a8;
    }
    ctx->pc = 0x14C9A0u;
    SET_GPR_U32(ctx, 31, 0x14C9A8u);
    ctx->pc = 0x14C9A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C9A0u;
    // 0x14c9a4: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14D960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14D960u, 0x14C9A0u, 0x14C9A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C9A8u;
label_14c9a8:
    // 0x14c9a8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x14c9a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_14c9ac:
    // 0x14c9ac: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x14c9acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_14c9b0:
    // 0x14c9b0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x14c9b0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_14c9b4:
    // 0x14c9b4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x14c9b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_14c9b8:
    // 0x14c9b8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14c9b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_14c9bc:
    // 0x14c9bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14c9bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_14c9c0:
    // 0x14c9c0: 0x3e00008  jr          $ra
label_14c9c4:
    if (ctx->pc == 0x14C9C4u) {
        ctx->pc = 0x14C9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C9C0u;
        // 0x14c9c4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14C9C8u;
        goto label_fallthrough_0x14c9c0;
    }
    ctx->pc = 0x14C9C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14C9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C9C0u;
        // 0x14c9c4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14C9C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x14c9c0:
    ctx->pc = 0x14C9C8u;
}
