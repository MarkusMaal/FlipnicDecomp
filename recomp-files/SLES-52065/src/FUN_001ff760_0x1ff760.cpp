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

// Function: FUN_001ff760
// Address: 0x1ff760 - 0x1ff7f4
void FUN_001ff760_0x1ff760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ff760_0x1ff760");
#endif

    switch (ctx->pc) {
        case 0x1ff778u: goto label_1ff778;
        case 0x1ff7c8u: goto label_1ff7c8;
        default: break;
    }

    ctx->pc = 0x1ff760u;

    // 0x1ff760: 0x2cc20010  sltiu       $v0, $a2, 0x10
    ctx->pc = 0x1ff760u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x1ff764: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1FF764u;
    {
        const bool branch_taken_0x1ff764 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FF768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF764u;
        // 0x1ff768: 0x851025  or          $v0, $a0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff764) {
            ctx->pc = 0x1FF7ACu;
            goto label_1ff7ac;
        }
    }
    ctx->pc = 0x1FF76Cu;
    // 0x1ff76c: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x1ff76cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x1ff770: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1FF770u;
    {
        const bool branch_taken_0x1ff770 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ff770) {
            ctx->pc = 0x1FF7ACu;
            goto label_1ff7ac;
        }
    }
    ctx->pc = 0x1FF778u;
label_1ff778:
    // 0x1ff778: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x1ff778u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ff77c: 0x2cc70020  sltiu       $a3, $a2, 0x20
    ctx->pc = 0x1ff77cu;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x1ff780: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x1ff780u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1ff784: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x1ff784u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x1ff788: 0x704344c9  pxor        $t0, $v0, $v1
    ctx->pc = 0x1ff788u;
    SET_GPR_VEC(ctx, 8, PS2_PXOR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1ff78c: 0x24a20010  addiu       $v0, $a1, 0x10
    ctx->pc = 0x1ff78cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x1ff790: 0x710753a9  pcpyud      $t2, $t0, $a3
    ctx->pc = 0x1ff790u;
    SET_GPR_VEC(ctx, 10, _mm_unpackhi_epi64(GPR_VEC(ctx, 8), GPR_VEC(ctx, 7)));
    // 0x1ff794: 0x1484825  or          $t1, $t2, $t0
    ctx->pc = 0x1ff794u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 10) | GPR_U64(ctx, 8));
    // 0x1ff798: 0x49280a  movz        $a1, $v0, $t1
    ctx->pc = 0x1ff798u;
    if (GPR_U64(ctx, 9) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
    // 0x1ff79c: 0x55200003  bnel        $t1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FF79Cu;
    {
        const bool branch_taken_0x1ff79c = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ff79c) {
            ctx->pc = 0x1FF7A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FF79Cu;
            // 0x1ff7a0: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FF7ACu;
            goto label_1ff7ac;
        }
    }
    ctx->pc = 0x1FF7A4u;
    // 0x1ff7a4: 0x10e0fff4  beqz        $a3, . + 4 + (-0xC << 2)
    ctx->pc = 0x1FF7A4u;
    {
        const bool branch_taken_0x1ff7a4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF7A4u;
        // 0x1ff7a8: 0x24c6fff0  addiu       $a2, $a2, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff7a4) {
            ctx->pc = 0x1FF778u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ff778;
        }
    }
    ctx->pc = 0x1FF7ACu;
label_1ff7ac:
    // 0x1ff7ac: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1ff7acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1ff7b0: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1ff7b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1ff7b4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1ff7b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1ff7b8: 0x10c2000c  beq         $a2, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1FF7B8u;
    {
        const bool branch_taken_0x1ff7b8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ff7b8) {
            ctx->pc = 0x1FF7ECu;
            goto label_1ff7ec;
        }
    }
    ctx->pc = 0x1FF7C0u;
    // 0x1ff7c0: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x1ff7c0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x1ff7c4: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x1ff7c4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
label_1ff7c8:
    // 0x1ff7c8: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x1ff7c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ff7cc: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x1ff7ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1ff7d0: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FF7D0u;
    {
        const bool branch_taken_0x1ff7d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FF7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF7D0u;
        // 0x1ff7d4: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff7d0) {
            ctx->pc = 0x1FF7E0u;
            goto label_1ff7e0;
        }
    }
    ctx->pc = 0x1FF7D8u;
    // 0x1ff7d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1FF7D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FF7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF7D8u;
        // 0x1ff7dc: 0x621023  subu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FF7D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FF7E0u;
label_1ff7e0:
    // 0x1ff7e0: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1ff7e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1ff7e4: 0x14c7fff8  bne         $a2, $a3, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1FF7E4u;
    {
        const bool branch_taken_0x1ff7e4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 7));
        ctx->pc = 0x1FF7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF7E4u;
        // 0x1ff7e8: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff7e4) {
            ctx->pc = 0x1FF7C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ff7c8;
        }
    }
    ctx->pc = 0x1FF7ECu;
label_1ff7ec:
    // 0x1ff7ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1FF7ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FF7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF7ECu;
        // 0x1ff7f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FF7ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FF7F4u;
}
