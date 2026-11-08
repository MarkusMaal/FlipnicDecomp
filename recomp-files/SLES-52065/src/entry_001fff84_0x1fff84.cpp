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

// Function: entry_001fff84
// Address: 0x1fff84 - 0x1fffc8
void entry_001fff84_0x1fff84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fff84_0x1fff84");
#endif

    switch (ctx->pc) {
        case 0x1fff9cu: goto label_1fff9c;
        default: break;
    }

    ctx->pc = 0x1fff84u;

    // 0x1fff84: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x1fff84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1fff88: 0x253a021  addu        $s4, $s2, $s3
    ctx->pc = 0x1fff88u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    // 0x1fff8c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1fff8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1fff90: 0xb4282a  slt         $a1, $a1, $s4
    ctx->pc = 0x1fff90u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x1fff94: 0xc07fea0  jal         func_1FFA80
    ctx->pc = 0x1FFF94u;
    SET_GPR_U32(ctx, 31, 0x1FFF9Cu);
    ctx->pc = 0x1FFF98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FFF94u;
    // 0x1fff98: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FFA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FFA80u, 0x1FFF94u, 0x1FFF9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FFF9Cu;
label_1fff9c:
    // 0x1fff9c: 0x40c82d  daddu       $t9, $v0, $zero
    ctx->pc = 0x1fff9cu;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fffa0: 0x14a880  sll         $s5, $s4, 2
    ctx->pc = 0x1fffa0u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x1fffa4: 0x27380014  addiu       $t8, $t9, 0x14
    ctx->pc = 0x1fffa4u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 25), 20));
    // 0x1fffa8: 0x3152021  addu        $a0, $t8, $s5
    ctx->pc = 0x1fffa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 21)));
    // 0x1fffac: 0x304102b  sltu        $v0, $t8, $a0
    ctx->pc = 0x1fffacu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 24) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1fffb0: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1FFFB0u;
    {
        const bool branch_taken_0x1fffb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FFFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFFB0u;
        // 0x1fffb4: 0x300482d  daddu       $t1, $t8, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fffb0) {
            ctx->pc = 0x1FFFECu;
            return;
        }
    }
    ctx->pc = 0x1FFFB8u;
    // 0x1fffb8: 0x260e0014  addiu       $t6, $s0, 0x14
    ctx->pc = 0x1fffb8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x1fffbc: 0x122880  sll         $a1, $s2, 2
    ctx->pc = 0x1fffbcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x1fffc0: 0x26260014  addiu       $a2, $s1, 0x14
    ctx->pc = 0x1fffc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x1fffc4: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x1fffc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    ctx->pc = 0x1fffc8u;
}
