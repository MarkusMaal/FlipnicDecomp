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

// Function: entry_00122390
// Address: 0x122390 - 0x1223f4
void entry_00122390_0x122390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00122390_0x122390");
#endif

    switch (ctx->pc) {
        case 0x1223bcu: goto label_1223bc;
        case 0x1223dcu: goto label_1223dc;
        default: break;
    }

    ctx->pc = 0x122390u;

    // 0x122390: 0x12200018  beqz        $s1, . + 4 + (0x18 << 2)
    ctx->pc = 0x122390u;
    {
        const bool branch_taken_0x122390 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x122390) {
            ctx->pc = 0x1223F4u;
            return;
        }
    }
    ctx->pc = 0x122398u;
    // 0x122398: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x122398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x12239c: 0x26240004  addiu       $a0, $s1, 0x4
    ctx->pc = 0x12239cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x1223a0: 0x26050004  addiu       $a1, $s0, 0x4
    ctx->pc = 0x1223a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x1223a4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1223a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x1223a8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1223a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1223ac: 0x24430003  addiu       $v1, $v0, 0x3
    ctx->pc = 0x1223acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x1223b0: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x1223b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x1223b4: 0xc04891c  jal         func_122470
    ctx->pc = 0x1223B4u;
    SET_GPR_U32(ctx, 31, 0x1223BCu);
    ctx->pc = 0x1223B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1223B4u;
    // 0x1223b8: 0x629823  subu        $s3, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122470u, 0x1223B4u, 0x1223BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1223BCu;
label_1223bc:
    // 0x1223bc: 0xae330004  sw          $s3, 0x4($s1)
    ctx->pc = 0x1223bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 19));
    // 0x1223c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1223c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1223c4: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x1223c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x1223c8: 0x26240004  addiu       $a0, $s1, 0x4
    ctx->pc = 0x1223c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x1223cc: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1223ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1223d0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1223d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1223d4: 0xc048908  jal         func_122420
    ctx->pc = 0x1223D4u;
    SET_GPR_U32(ctx, 31, 0x1223DCu);
    ctx->pc = 0x1223D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1223D4u;
    // 0x1223d8: 0x24450001  addiu       $a1, $v0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122420u, 0x1223D4u, 0x1223DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1223DCu;
label_1223dc:
    // 0x1223dc: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x1223dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x1223e0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1223e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1223e4: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x1223e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1223e8: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x1223e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1223ec: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x1223ECu;
    SET_GPR_U32(ctx, 31, 0x1223F4u);
    ctx->pc = 0x1223F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1223ECu;
    // 0x1223f0: 0x24460001  addiu       $a2, $v0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x1223ECu, 0x1223F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1223F4u;
}
