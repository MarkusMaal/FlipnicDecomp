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

// Function: FUN_0011f480
// Address: 0x11f480 - 0x11f52c
void FUN_0011f480_0x11f480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0011f480_0x11f480");
#endif

    switch (ctx->pc) {
        case 0x11f4b4u: goto label_11f4b4;
        case 0x11f4d0u: goto label_11f4d0;
        case 0x11f4fcu: goto label_11f4fc;
        default: break;
    }

    ctx->pc = 0x11f480u;

    // 0x11f480: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x11f480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x11f484: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x11f484u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x11f488: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x11f488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x11f48c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x11f48cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x11f490: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x11f490u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x11f494: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x11f494u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f498: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x11f498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x11f49c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x11f49cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f4a0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x11f4a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x11f4a4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x11f4a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f4a8: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x11f4a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f4ac: 0xc040168  jal         func_1005A0
    ctx->pc = 0x11F4ACu;
    SET_GPR_U32(ctx, 31, 0x11F4B4u);
    ctx->pc = 0x11F4B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F4ACu;
    // 0x11f4b0: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1005A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1005A0u, 0x11F4ACu, 0x11F4B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F4B4u;
label_11f4b4:
    // 0x11f4b4: 0x3c050012  lui         $a1, 0x12
    ctx->pc = 0x11f4b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)18 << 16));
    // 0x11f4b8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11f4b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f4bc: 0x24a5f530  addiu       $a1, $a1, -0xAD0
    ctx->pc = 0x11f4bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964528));
    // 0x11f4c0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11f4c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f4c4: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x11f4c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x11f4c8: 0xc07a424  jal         func_1E9090
    ctx->pc = 0x11F4C8u;
    SET_GPR_U32(ctx, 31, 0x11F4D0u);
    ctx->pc = 0x11F4CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F4C8u;
    // 0x11f4cc: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9090u, 0x11F4C8u, 0x11F4D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F4D0u;
label_11f4d0:
    // 0x11f4d0: 0xae62201c  sw          $v0, 0x201C($s3)
    ctx->pc = 0x11f4d0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8220), GPR_U32(ctx, 2));
    // 0x11f4d4: 0x8e62201c  lw          $v0, 0x201C($s3)
    ctx->pc = 0x11f4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8220)));
    // 0x11f4d8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11F4D8u;
    {
        const bool branch_taken_0x11f4d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11f4d8) {
            ctx->pc = 0x11F4E8u;
            goto label_11f4e8;
        }
    }
    ctx->pc = 0x11F4E0u;
    // 0x11f4e0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x11F4E0u;
    {
        const bool branch_taken_0x11f4e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F4E0u;
        // 0x11f4e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f4e0) {
            ctx->pc = 0x11F510u;
            goto label_11f510;
        }
    }
    ctx->pc = 0x11F4E8u;
label_11f4e8:
    // 0x11f4e8: 0xae722020  sw          $s2, 0x2020($s3)
    ctx->pc = 0x11f4e8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8224), GPR_U32(ctx, 18));
    // 0x11f4ec: 0x123100  sll         $a2, $s2, 4
    ctx->pc = 0x11f4ecu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x11f4f0: 0x8e64201c  lw          $a0, 0x201C($s3)
    ctx->pc = 0x11f4f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8220)));
    // 0x11f4f4: 0xc07fe6c  jal         func_1FF9B0
    ctx->pc = 0x11F4F4u;
    SET_GPR_U32(ctx, 31, 0x11F4FCu);
    ctx->pc = 0x11F4F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F4F4u;
    // 0x11f4f8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF9B0u, 0x11F4F4u, 0x11F4FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F4FCu;
label_11f4fc:
    // 0x11f4fc: 0xae710004  sw          $s1, 0x4($s3)
    ctx->pc = 0x11f4fcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 17));
    // 0x11f500: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11f500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11f504: 0xae700000  sw          $s0, 0x0($s3)
    ctx->pc = 0x11f504u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 16));
    // 0x11f508: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x11f508u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x11f50c: 0xae632028  sw          $v1, 0x2028($s3)
    ctx->pc = 0x11f50cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8232), GPR_U32(ctx, 3));
label_11f510:
    // 0x11f510: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x11f510u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11f514: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x11f514u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11f518: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x11f518u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11f51c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x11f51cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11f520: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x11f520u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11f524: 0x3e00008  jr          $ra
    ctx->pc = 0x11F524u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11F528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F524u;
        // 0x11f528: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11F524u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11F52Cu;
}
