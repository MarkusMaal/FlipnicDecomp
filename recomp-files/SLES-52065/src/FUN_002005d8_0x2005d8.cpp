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

// Function: FUN_002005d8
// Address: 0x2005d8 - 0x200668
void FUN_002005d8_0x2005d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_002005d8_0x2005d8");
#endif

    ctx->pc = 0x2005d8u;

    // 0x2005d8: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x2005d8u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x2005dc: 0x3c027ff0  lui         $v0, 0x7FF0
    ctx->pc = 0x2005dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32752 << 16));
    // 0x2005e0: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x2005e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x2005e4: 0x3c03fcc0  lui         $v1, 0xFCC0
    ctx->pc = 0x2005e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64704 << 16));
    // 0x2005e8: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x2005e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2005ec: 0x18800003  blez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2005ECu;
    {
        const bool branch_taken_0x2005ec = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x2005F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2005ECu;
        // 0x2005f0: 0x41023  negu        $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2005ec) {
            ctx->pc = 0x2005FCu;
            goto label_2005fc;
        }
    }
    ctx->pc = 0x2005F4u;
    // 0x2005f4: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x2005F4u;
    {
        const bool branch_taken_0x2005f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2005F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2005F4u;
        // 0x2005f8: 0x4283c  dsll32      $a1, $a0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2005f4) {
            ctx->pc = 0x200660u;
            goto label_200660;
        }
    }
    ctx->pc = 0x2005FCu;
label_2005fc:
    // 0x2005fc: 0x22503  sra         $a0, $v0, 20
    ctx->pc = 0x2005fcu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 20));
    // 0x200600: 0x28830014  slti        $v1, $a0, 0x14
    ctx->pc = 0x200600u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x200604: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x200604u;
    {
        const bool branch_taken_0x200604 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x200608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200604u;
        // 0x200608: 0x3c020008  lui         $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200604) {
            ctx->pc = 0x200618u;
            goto label_200618;
        }
    }
    ctx->pc = 0x20060Cu;
    // 0x20060c: 0x821007  srav        $v0, $v0, $a0
    ctx->pc = 0x20060cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x200610: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x200610u;
    {
        const bool branch_taken_0x200610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x200614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200610u;
        // 0x200614: 0x2283c  dsll32      $a1, $v0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200610) {
            ctx->pc = 0x200660u;
            goto label_200660;
        }
    }
    ctx->pc = 0x200618u;
label_200618:
    // 0x200618: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x200618u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x20061c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x20061cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x200620: 0x2484ffec  addiu       $a0, $a0, -0x14
    ctx->pc = 0x200620u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967276));
    // 0x200624: 0x2882001f  slti        $v0, $a0, 0x1F
    ctx->pc = 0x200624u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x200628: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x200628u;
    {
        const bool branch_taken_0x200628 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20062Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200628u;
        // 0x20062c: 0xa32824  and         $a1, $a1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200628) {
            ctx->pc = 0x200644u;
            goto label_200644;
        }
    }
    ctx->pc = 0x200630u;
    // 0x200630: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x200630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x200634: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x200634u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x200638: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x200638u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x20063c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x20063Cu;
    {
        const bool branch_taken_0x20063c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x200640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20063Cu;
        // 0x200640: 0x431004  sllv        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20063c) {
            ctx->pc = 0x200648u;
            goto label_200648;
        }
    }
    ctx->pc = 0x200644u;
label_200644:
    // 0x200644: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x200644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_200648:
    // 0x200648: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x200648u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x20064c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x20064cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x200650: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x200650u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x200654: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x200654u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x200658: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x200658u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x20065c: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x20065cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_200660:
    // 0x200660: 0x3e00008  jr          $ra
    ctx->pc = 0x200660u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x200664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200660u;
        // 0x200664: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x200660u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x200668u;
}
