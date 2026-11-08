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

// Function: FUN_0017d640
// Address: 0x17d640 - 0x17d780
void FUN_0017d640_0x17d640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0017d640_0x17d640");
#endif

    switch (ctx->pc) {
        case 0x17d660u: goto label_17d660;
        case 0x17d67cu: goto label_17d67c;
        case 0x17d690u: goto label_17d690;
        case 0x17d6acu: goto label_17d6ac;
        case 0x17d6b4u: goto label_17d6b4;
        case 0x17d764u: goto label_17d764;
        default: break;
    }

    ctx->pc = 0x17d640u;

    // 0x17d640: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17d640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17d644: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17d644u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d648: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17d648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17d64c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17d64cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17d650: 0xafa40024  sw          $a0, 0x24($sp)
    ctx->pc = 0x17d650u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 4));
    // 0x17d654: 0x8fa40024  lw          $a0, 0x24($sp)
    ctx->pc = 0x17d654u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x17d658: 0xc049dd8  jal         func_127760
    ctx->pc = 0x17D658u;
    SET_GPR_U32(ctx, 31, 0x17D660u);
    ctx->pc = 0x17D65Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D658u;
    // 0x17d65c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127760u, 0x17D658u, 0x17D660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D660u;
label_17d660:
    // 0x17d660: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x17d660u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x17d664: 0x27a5002c  addiu       $a1, $sp, 0x2C
    ctx->pc = 0x17d664u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x17d668: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x17d668u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x17d66c: 0x27a60028  addiu       $a2, $sp, 0x28
    ctx->pc = 0x17d66cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x17d670: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x17d670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x17d674: 0xc05fdc4  jal         func_17F710
    ctx->pc = 0x17D674u;
    SET_GPR_U32(ctx, 31, 0x17D67Cu);
    ctx->pc = 0x17D678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D674u;
    // 0x17d678: 0x2444000c  addiu       $a0, $v0, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F710u, 0x17D674u, 0x17D67Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D67Cu;
label_17d67c:
    // 0x17d67c: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x17d67cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x17d680: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17d680u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d684: 0x24501050  addiu       $s0, $v0, 0x1050
    ctx->pc = 0x17d684u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4176));
    // 0x17d688: 0xc05f5e0  jal         func_17D780
    ctx->pc = 0x17D688u;
    SET_GPR_U32(ctx, 31, 0x17D690u);
    ctx->pc = 0x17D68Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D688u;
    // 0x17d68c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D780u, 0x17D688u, 0x17D690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D690u;
label_17d690:
    // 0x17d690: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x17d690u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x17d694: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x17d694u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17d698: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x17d698u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x17d69c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x17d69cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d6a0: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x17d6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x17d6a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17d6a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d6a8: 0xac641034  sw          $a0, 0x1034($v1)
    ctx->pc = 0x17d6a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4148), GPR_U32(ctx, 4));
label_17d6ac:
    // 0x17d6ac: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x17d6acu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d6b0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x17d6b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17d6b4:
    // 0x17d6b4: 0x0  nop
    ctx->pc = 0x17d6b4u;
    // NOP
    // 0x17d6b8: 0x8fa70024  lw          $a3, 0x24($sp)
    ctx->pc = 0x17d6b8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x17d6bc: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x17d6bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x17d6c0: 0x28660020  slti        $a2, $v1, 0x20
    ctx->pc = 0x17d6c0u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x17d6c4: 0xa73821  addu        $a3, $a1, $a3
    ctx->pc = 0x17d6c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x17d6c8: 0xe43821  addu        $a3, $a3, $a0
    ctx->pc = 0x17d6c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x17d6cc: 0xace0001c  sw          $zero, 0x1C($a3)
    ctx->pc = 0x17d6ccu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 28), GPR_U32(ctx, 0));
    // 0x17d6d0: 0x8fa70024  lw          $a3, 0x24($sp)
    ctx->pc = 0x17d6d0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x17d6d4: 0xa73821  addu        $a3, $a1, $a3
    ctx->pc = 0x17d6d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x17d6d8: 0xe43821  addu        $a3, $a3, $a0
    ctx->pc = 0x17d6d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x17d6dc: 0xace00020  sw          $zero, 0x20($a3)
    ctx->pc = 0x17d6dcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 32), GPR_U32(ctx, 0));
    // 0x17d6e0: 0x8fa70024  lw          $a3, 0x24($sp)
    ctx->pc = 0x17d6e0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x17d6e4: 0xa73821  addu        $a3, $a1, $a3
    ctx->pc = 0x17d6e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x17d6e8: 0xe43821  addu        $a3, $a3, $a0
    ctx->pc = 0x17d6e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x17d6ec: 0xace00024  sw          $zero, 0x24($a3)
    ctx->pc = 0x17d6ecu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 36), GPR_U32(ctx, 0));
    // 0x17d6f0: 0x8fa70024  lw          $a3, 0x24($sp)
    ctx->pc = 0x17d6f0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x17d6f4: 0xa73821  addu        $a3, $a1, $a3
    ctx->pc = 0x17d6f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x17d6f8: 0xe43821  addu        $a3, $a3, $a0
    ctx->pc = 0x17d6f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x17d6fc: 0xace00028  sw          $zero, 0x28($a3)
    ctx->pc = 0x17d6fcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 40), GPR_U32(ctx, 0));
    // 0x17d700: 0x8fa70024  lw          $a3, 0x24($sp)
    ctx->pc = 0x17d700u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x17d704: 0xa73821  addu        $a3, $a1, $a3
    ctx->pc = 0x17d704u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x17d708: 0xe43821  addu        $a3, $a3, $a0
    ctx->pc = 0x17d708u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x17d70c: 0xace0002c  sw          $zero, 0x2C($a3)
    ctx->pc = 0x17d70cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 44), GPR_U32(ctx, 0));
    // 0x17d710: 0x8fa70024  lw          $a3, 0x24($sp)
    ctx->pc = 0x17d710u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x17d714: 0xa73821  addu        $a3, $a1, $a3
    ctx->pc = 0x17d714u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x17d718: 0xe43821  addu        $a3, $a3, $a0
    ctx->pc = 0x17d718u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x17d71c: 0xace00030  sw          $zero, 0x30($a3)
    ctx->pc = 0x17d71cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 48), GPR_U32(ctx, 0));
    // 0x17d720: 0x8fa70024  lw          $a3, 0x24($sp)
    ctx->pc = 0x17d720u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x17d724: 0xa73821  addu        $a3, $a1, $a3
    ctx->pc = 0x17d724u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x17d728: 0xe43821  addu        $a3, $a3, $a0
    ctx->pc = 0x17d728u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x17d72c: 0xace00034  sw          $zero, 0x34($a3)
    ctx->pc = 0x17d72cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 52), GPR_U32(ctx, 0));
    // 0x17d730: 0x8fa70024  lw          $a3, 0x24($sp)
    ctx->pc = 0x17d730u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x17d734: 0xa73821  addu        $a3, $a1, $a3
    ctx->pc = 0x17d734u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x17d738: 0xe43821  addu        $a3, $a3, $a0
    ctx->pc = 0x17d738u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x17d73c: 0xace00038  sw          $zero, 0x38($a3)
    ctx->pc = 0x17d73cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 56), GPR_U32(ctx, 0));
    // 0x17d740: 0x14c0ffdc  bnez        $a2, . + 4 + (-0x24 << 2)
    ctx->pc = 0x17D740u;
    {
        const bool branch_taken_0x17d740 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x17D744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D740u;
        // 0x17d744: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d740) {
            ctx->pc = 0x17D6B4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17d6b4;
        }
    }
    ctx->pc = 0x17D748u;
    // 0x17d748: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x17d748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x17d74c: 0x28430020  slti        $v1, $v0, 0x20
    ctx->pc = 0x17d74cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x17d750: 0x1460ffd6  bnez        $v1, . + 4 + (-0x2A << 2)
    ctx->pc = 0x17D750u;
    {
        const bool branch_taken_0x17d750 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x17D754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D750u;
        // 0x17d754: 0x24a50080  addiu       $a1, $a1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d750) {
            ctx->pc = 0x17D6ACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17d6ac;
        }
    }
    ctx->pc = 0x17D758u;
    // 0x17d758: 0x8fa40024  lw          $a0, 0x24($sp)
    ctx->pc = 0x17d758u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x17d75c: 0xc04a098  jal         func_128260
    ctx->pc = 0x17D75Cu;
    SET_GPR_U32(ctx, 31, 0x17D764u);
    ctx->pc = 0x17D760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D75Cu;
    // 0x17d760: 0x24050100  addiu       $a1, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128260u, 0x17D75Cu, 0x17D764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D764u;
label_17d764:
    // 0x17d764: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x17d764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x17d768: 0xac401030  sw          $zero, 0x1030($v0)
    ctx->pc = 0x17d768u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4144), GPR_U32(ctx, 0));
    // 0x17d76c: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x17d76cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x17d770: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17d770u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17d774: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17d774u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17d778: 0x3e00008  jr          $ra
    ctx->pc = 0x17D778u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17D77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D778u;
        // 0x17d77c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17D778u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17D780u;
}
