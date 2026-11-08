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

// Function: entry_001916d4
// Address: 0x1916d4 - 0x191738
void entry_001916d4_0x1916d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001916d4_0x1916d4");
#endif

    switch (ctx->pc) {
        case 0x1916fcu: goto label_1916fc;
        default: break;
    }

    ctx->pc = 0x1916d4u;

label_1916d4:
    // 0x1916d4: 0x7ba40040  lq          $a0, 0x40($sp)
    ctx->pc = 0x1916d4u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1916d8:
    // 0x1916d8: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x1916d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_1916dc:
    // 0x1916dc: 0x78620350  lq          $v0, 0x350($v1)
    ctx->pc = 0x1916dcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 848)));
label_1916e0:
    // 0x1916e0: 0x708210a8  pceqw       $v0, $a0, $v0
    ctx->pc = 0x1916e0u;
    SET_GPR_VEC(ctx, 2, PS2_PCEQW(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
label_1916e4:
    // 0x1916e4: 0x704215c8  ppach       $v0, $v0, $v0
    ctx->pc = 0x1916e4u;
    SET_GPR_VEC(ctx, 2, PS2_PPACH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 2)));
label_1916e8:
    // 0x1916e8: 0x2c42ffff  sltiu       $v0, $v0, -0x1
    ctx->pc = 0x1916e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4294967295) ? 1 : 0);
label_1916ec:
    // 0x1916ec: 0x1040015f  beqz        $v0, . + 4 + (0x15F << 2)
label_1916f0:
    if (ctx->pc == 0x1916F0u) {
        ctx->pc = 0x1916F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1916ECu;
        // 0x1916f0: 0x24650350  addiu       $a1, $v1, 0x350 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 848));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1916F4u;
        goto label_1916f4;
    }
    ctx->pc = 0x1916ECu;
    {
        const bool branch_taken_0x1916ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1916F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1916ECu;
        // 0x1916f0: 0x24650350  addiu       $a1, $v1, 0x350 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 848));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1916ec) {
            ctx->pc = 0x191C6Cu;
            return;
        }
    }
    ctx->pc = 0x1916F4u;
label_1916f4:
    // 0x1916f4: 0xc0648ec  jal         func_1923B0
label_1916f8:
    if (ctx->pc == 0x1916F8u) {
        ctx->pc = 0x1916F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1916F4u;
        // 0x1916f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1916FCu;
        goto label_1916fc;
    }
    ctx->pc = 0x1916F4u;
    SET_GPR_U32(ctx, 31, 0x1916FCu);
    ctx->pc = 0x1916F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1916F4u;
    // 0x1916f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1923B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1923B0u, 0x1916F4u, 0x1916FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1916FCu;
label_1916fc:
    // 0x1916fc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1916fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_191700:
    // 0x191700: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x191700u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_191704:
    // 0x191704: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x191704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_191708:
    // 0x191708: 0x8c450490  lw          $a1, 0x490($v0)
    ctx->pc = 0x191708u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1168)));
label_19170c:
    // 0x19170c: 0x8ca30024  lw          $v1, 0x24($a1)
    ctx->pc = 0x19170cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
label_191710:
    // 0x191710: 0x20630005  addi        $v1, $v1, 0x5
    ctx->pc = 0x191710u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)5, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 3, (int32_t)tmp); }
label_191714:
    // 0x191714: 0x2c61000b  sltiu       $at, $v1, 0xB
    ctx->pc = 0x191714u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
label_191718:
    // 0x191718: 0x10200302  beqz        $at, . + 4 + (0x302 << 2)
label_19171c:
    if (ctx->pc == 0x19171Cu) {
        ctx->pc = 0x19171Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191718u;
        // 0x19171c: 0x3c040022  lui         $a0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191720u;
        goto label_191720;
    }
    ctx->pc = 0x191718u;
    {
        const bool branch_taken_0x191718 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x19171Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191718u;
        // 0x19171c: 0x3c040022  lui         $a0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191718) {
            ctx->pc = 0x192324u;
            return;
        }
    }
    ctx->pc = 0x191720u;
label_191720:
    // 0x191720: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x191720u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_191724:
    // 0x191724: 0x2484feb0  addiu       $a0, $a0, -0x150
    ctx->pc = 0x191724u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966960));
label_191728:
    // 0x191728: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x191728u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_19172c:
    // 0x19172c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x19172cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_191730:
    // 0x191730: 0x600008  jr          $v1
label_191734:
    if (ctx->pc == 0x191734u) {
        ctx->pc = 0x191738u;
        goto label_fallthrough_0x191730;
    }
    ctx->pc = 0x191730u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x191730u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x191730:
    ctx->pc = 0x191738u;
}
