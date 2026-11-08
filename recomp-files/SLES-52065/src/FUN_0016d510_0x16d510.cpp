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

// Function: FUN_0016d510
// Address: 0x16d510 - 0x16d5cc
void FUN_0016d510_0x16d510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0016d510_0x16d510");
#endif

    switch (ctx->pc) {
        case 0x16d528u: goto label_16d528;
        case 0x16d58cu: goto label_16d58c;
        case 0x16d5bcu: goto label_16d5bc;
        default: break;
    }

    ctx->pc = 0x16d510u;

    // 0x16d510: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16d510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16d514: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x16d514u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x16d518: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x16d518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x16d51c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16d51cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x16d520: 0xc042118  jal         func_108460
    ctx->pc = 0x16D520u;
    SET_GPR_U32(ctx, 31, 0x16D528u);
    ctx->pc = 0x16D524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D520u;
    // 0x16d524: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x16D520u, 0x16D528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D528u;
label_16d528:
    // 0x16d528: 0x8e0301d4  lw          $v1, 0x1D4($s0)
    ctx->pc = 0x16d528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 468)));
    // 0x16d52c: 0x28610003  slti        $at, $v1, 0x3
    ctx->pc = 0x16d52cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x16d530: 0x10200022  beqz        $at, . + 4 + (0x22 << 2)
    ctx->pc = 0x16D530u;
    {
        const bool branch_taken_0x16d530 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d530) {
            ctx->pc = 0x16D5BCu;
            goto label_16d5bc;
        }
    }
    ctx->pc = 0x16D538u;
    // 0x16d538: 0x8e030220  lw          $v1, 0x220($s0)
    ctx->pc = 0x16d538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 544)));
    // 0x16d53c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x16d53cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x16d540: 0xae030220  sw          $v1, 0x220($s0)
    ctx->pc = 0x16d540u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 544), GPR_U32(ctx, 3));
    // 0x16d544: 0x8e030220  lw          $v1, 0x220($s0)
    ctx->pc = 0x16d544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 544)));
    // 0x16d548: 0x1460001c  bnez        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x16D548u;
    {
        const bool branch_taken_0x16d548 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16d548) {
            ctx->pc = 0x16D5BCu;
            goto label_16d5bc;
        }
    }
    ctx->pc = 0x16D550u;
    // 0x16d550: 0x8e030224  lw          $v1, 0x224($s0)
    ctx->pc = 0x16d550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 548)));
    // 0x16d554: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x16d554u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16d558: 0xae030220  sw          $v1, 0x220($s0)
    ctx->pc = 0x16d558u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 544), GPR_U32(ctx, 3));
    // 0x16d55c: 0x8e0401d4  lw          $a0, 0x1D4($s0)
    ctx->pc = 0x16d55cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 468)));
    // 0x16d560: 0x1485000c  bne         $a0, $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x16D560u;
    {
        const bool branch_taken_0x16d560 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x16D564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D560u;
        // 0x16d564: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d560) {
            ctx->pc = 0x16D594u;
            goto label_16d594;
        }
    }
    ctx->pc = 0x16D568u;
    // 0x16d568: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x16d568u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x16d56c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x16d56cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16d570: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x16d570u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x16d574: 0xae0301d4  sw          $v1, 0x1D4($s0)
    ctx->pc = 0x16d574u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 468), GPR_U32(ctx, 3));
    // 0x16d578: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16d578u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d57c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x16d57cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x16d580: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x16d580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x16d584: 0xc0425a4  jal         func_109690
    ctx->pc = 0x16D584u;
    SET_GPR_U32(ctx, 31, 0x16D58Cu);
    ctx->pc = 0x16D588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D584u;
    // 0x16d588: 0xa040002b  sb          $zero, 0x2B($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 43), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109690u, 0x16D584u, 0x16D58Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D58Cu;
label_16d58c:
    // 0x16d58c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x16D58Cu;
    {
        const bool branch_taken_0x16d58c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D58Cu;
        // 0x16d590: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d58c) {
            ctx->pc = 0x16D5C0u;
            goto label_16d5c0;
        }
    }
    ctx->pc = 0x16D594u;
label_16d594:
    // 0x16d594: 0x14830009  bne         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x16D594u;
    {
        const bool branch_taken_0x16d594 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x16d594) {
            ctx->pc = 0x16D5BCu;
            goto label_16d5bc;
        }
    }
    ctx->pc = 0x16D59Cu;
    // 0x16d59c: 0xae0501d4  sw          $a1, 0x1D4($s0)
    ctx->pc = 0x16d59cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 468), GPR_U32(ctx, 5));
    // 0x16d5a0: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x16d5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x16d5a4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x16d5a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x16d5a8: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x16d5a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x16d5ac: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x16d5acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x16d5b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16d5b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d5b4: 0xc0425a4  jal         func_109690
    ctx->pc = 0x16D5B4u;
    SET_GPR_U32(ctx, 31, 0x16D5BCu);
    ctx->pc = 0x16D5B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D5B4u;
    // 0x16d5b8: 0xa066002b  sb          $a2, 0x2B($v1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 3), 43), (uint8_t)GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109690u, 0x16D5B4u, 0x16D5BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D5BCu;
label_16d5bc:
    // 0x16d5bc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x16d5bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_16d5c0:
    // 0x16d5c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16d5c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16d5c4: 0x3e00008  jr          $ra
    ctx->pc = 0x16D5C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16D5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D5C4u;
        // 0x16d5c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16D5C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16D5CCu;
}
