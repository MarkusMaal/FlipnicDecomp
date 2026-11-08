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

// Function: FUN_0016d7f0
// Address: 0x16d7f0 - 0x16d8f0
void FUN_0016d7f0_0x16d7f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0016d7f0_0x16d7f0");
#endif

    switch (ctx->pc) {
        case 0x16d81cu: goto label_16d81c;
        case 0x16d854u: goto label_16d854;
        case 0x16d868u: goto label_16d868;
        case 0x16d874u: goto label_16d874;
        case 0x16d8b0u: goto label_16d8b0;
        case 0x16d8d8u: goto label_16d8d8;
        default: break;
    }

    ctx->pc = 0x16d7f0u;

    // 0x16d7f0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x16d7f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x16d7f4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x16d7f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x16d7f8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x16d7f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x16d7fc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x16d7fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x16d800: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16d800u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x16d804: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x16d804u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d808: 0x1603001c  bne         $s0, $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x16D808u;
    {
        const bool branch_taken_0x16d808 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        ctx->pc = 0x16D80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D808u;
        // 0x16d80c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d808) {
            ctx->pc = 0x16D87Cu;
            goto label_16d87c;
        }
    }
    ctx->pc = 0x16D810u;
    // 0x16d810: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x16d810u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x16d814: 0xc046458  jal         func_119160
    ctx->pc = 0x16D814u;
    SET_GPR_U32(ctx, 31, 0x16D81Cu);
    ctx->pc = 0x16D818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D814u;
    // 0x16d818: 0x2484f450  addiu       $a0, $a0, -0xBB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119160u, 0x16D814u, 0x16D81Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D81Cu;
label_16d81c:
    // 0x16d81c: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x16d81cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x16d820: 0x7a260030  lq          $a2, 0x30($s1)
    ctx->pc = 0x16d820u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x16d824: 0x7a270040  lq          $a3, 0x40($s1)
    ctx->pc = 0x16d824u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x16d828: 0x7a280050  lq          $t0, 0x50($s1)
    ctx->pc = 0x16d828u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x16d82c: 0x7a290060  lq          $t1, 0x60($s1)
    ctx->pc = 0x16d82cu;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x16d830: 0x7ca60000  sq          $a2, 0x0($a1)
    ctx->pc = 0x16d830u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 6));
    // 0x16d834: 0x7ca70010  sq          $a3, 0x10($a1)
    ctx->pc = 0x16d834u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), GPR_VEC(ctx, 7));
    // 0x16d838: 0x7ca80020  sq          $t0, 0x20($a1)
    ctx->pc = 0x16d838u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 32), GPR_VEC(ctx, 8));
    // 0x16d83c: 0x7ca90030  sq          $t1, 0x30($a1)
    ctx->pc = 0x16d83cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 48), GPR_VEC(ctx, 9));
    // 0x16d840: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x16d840u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x16d844: 0x8f8283a8  lw          $v0, -0x7C58($gp)
    ctx->pc = 0x16d844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935464)));
    // 0x16d848: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16d848u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d84c: 0xc0465f0  jal         func_1197C0
    ctx->pc = 0x16D84Cu;
    SET_GPR_U32(ctx, 31, 0x16D854u);
    ctx->pc = 0x16D850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D84Cu;
    // 0x16d850: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1197C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1197C0u, 0x16D84Cu, 0x16D854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D854u;
label_16d854:
    // 0x16d854: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x16d854u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x16d858: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16d858u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d85c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x16d85cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x16d860: 0xc0425a4  jal         func_109690
    ctx->pc = 0x16D860u;
    SET_GPR_U32(ctx, 31, 0x16D868u);
    ctx->pc = 0x16D864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D860u;
    // 0x16d864: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109690u, 0x16D860u, 0x16D868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D868u;
label_16d868:
    // 0x16d868: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16d868u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d86c: 0xc042118  jal         func_108460
    ctx->pc = 0x16D86Cu;
    SET_GPR_U32(ctx, 31, 0x16D874u);
    ctx->pc = 0x16D870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D86Cu;
    // 0x16d870: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x16D86Cu, 0x16D874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D874u;
label_16d874:
    // 0x16d874: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x16D874u;
    {
        const bool branch_taken_0x16d874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D874u;
        // 0x16d878: 0xae3001d4  sw          $s0, 0x1D4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 468), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d874) {
            ctx->pc = 0x16D8DCu;
            goto label_16d8dc;
        }
    }
    ctx->pc = 0x16D87Cu;
label_16d87c:
    // 0x16d87c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x16d87cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x16d880: 0x16030015  bne         $s0, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x16D880u;
    {
        const bool branch_taken_0x16d880 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x16d880) {
            ctx->pc = 0x16D8D8u;
            goto label_16d8d8;
        }
    }
    ctx->pc = 0x16D888u;
    // 0x16d888: 0x8e2501d4  lw          $a1, 0x1D4($s1)
    ctx->pc = 0x16d888u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 468)));
    // 0x16d88c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x16d88cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16d890: 0x14a30009  bne         $a1, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x16D890u;
    {
        const bool branch_taken_0x16d890 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x16D894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D890u;
        // 0x16d894: 0x28a30003  slti        $v1, $a1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d890) {
            ctx->pc = 0x16D8B8u;
            goto label_16d8b8;
        }
    }
    ctx->pc = 0x16D898u;
    // 0x16d898: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x16d898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x16d89c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x16d89cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x16d8a0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x16d8a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x16d8a4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x16d8a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x16d8a8: 0xc0425a4  jal         func_109690
    ctx->pc = 0x16D8A8u;
    SET_GPR_U32(ctx, 31, 0x16D8B0u);
    ctx->pc = 0x16D8ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D8A8u;
    // 0x16d8ac: 0xa060002b  sb          $zero, 0x2B($v1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 3), 43), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109690u, 0x16D8A8u, 0x16D8B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D8B0u;
label_16d8b0:
    // 0x16d8b0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x16D8B0u;
    {
        const bool branch_taken_0x16d8b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d8b0) {
            ctx->pc = 0x16D8D8u;
            goto label_16d8d8;
        }
    }
    ctx->pc = 0x16D8B8u;
label_16d8b8:
    // 0x16d8b8: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x16D8B8u;
    {
        const bool branch_taken_0x16d8b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16d8b8) {
            ctx->pc = 0x16D8D8u;
            goto label_16d8d8;
        }
    }
    ctx->pc = 0x16D8C0u;
    // 0x16d8c0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x16d8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x16d8c4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x16d8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x16d8c8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x16d8c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x16d8cc: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x16d8ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x16d8d0: 0xc0425a4  jal         func_109690
    ctx->pc = 0x16D8D0u;
    SET_GPR_U32(ctx, 31, 0x16D8D8u);
    ctx->pc = 0x16D8D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D8D0u;
    // 0x16d8d4: 0xa060002b  sb          $zero, 0x2B($v1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 3), 43), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109690u, 0x16D8D0u, 0x16D8D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D8D8u;
label_16d8d8:
    // 0x16d8d8: 0xae3001d4  sw          $s0, 0x1D4($s1)
    ctx->pc = 0x16d8d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 468), GPR_U32(ctx, 16));
label_16d8dc:
    // 0x16d8dc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x16d8dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16d8e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x16d8e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16d8e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16d8e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16d8e8: 0x3e00008  jr          $ra
    ctx->pc = 0x16D8E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16D8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D8E8u;
        // 0x16d8ec: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16D8E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16D8F0u;
}
