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

// Function: entry_0010bd20
// Address: 0x10bd20 - 0x10bda0
void entry_0010bd20_0x10bd20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010bd20_0x10bd20");
#endif

    switch (ctx->pc) {
        case 0x10bd3cu: goto label_10bd3c;
        case 0x10bd60u: goto label_10bd60;
        case 0x10bd80u: goto label_10bd80;
        case 0x10bd98u: goto label_10bd98;
        default: break;
    }

    ctx->pc = 0x10bd20u;

    // 0x10bd20: 0x1462001f  bne         $v1, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x10BD20u;
    {
        const bool branch_taken_0x10bd20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x10BD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BD20u;
        // 0x10bd24: 0x28610004  slti        $at, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bd20) {
            ctx->pc = 0x10BDA0u;
            return;
        }
    }
    ctx->pc = 0x10BD28u;
    // 0x10bd28: 0x8e82231c  lw          $v0, 0x231C($s4)
    ctx->pc = 0x10bd28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8988)));
    // 0x10bd2c: 0x1053001c  beq         $v0, $s3, . + 4 + (0x1C << 2)
    ctx->pc = 0x10BD2Cu;
    {
        const bool branch_taken_0x10bd2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x10BD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BD2Cu;
        // 0x10bd30: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bd2c) {
            ctx->pc = 0x10BDA0u;
            return;
        }
    }
    ctx->pc = 0x10BD34u;
    // 0x10bd34: 0xc059990  jal         func_166640
    ctx->pc = 0x10BD34u;
    SET_GPR_U32(ctx, 31, 0x10BD3Cu);
    ctx->pc = 0x10BD38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10BD34u;
    // 0x10bd38: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x166640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166640u, 0x10BD34u, 0x10BD3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10BD3Cu;
label_10bd3c:
    // 0x10bd3c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x10bd3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10bd40: 0x1443001a  bne         $v0, $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x10BD40u;
    {
        const bool branch_taken_0x10bd40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x10bd40) {
            ctx->pc = 0x10BDACu;
            return;
        }
    }
    ctx->pc = 0x10BD48u;
    // 0x10bd48: 0x868243f0  lh          $v0, 0x43F0($s4)
    ctx->pc = 0x10bd48u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 17392)));
    // 0x10bd4c: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x10bd4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x10bd50: 0x2484e308  addiu       $a0, $a0, -0x1CF8
    ctx->pc = 0x10bd50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959880));
    // 0x10bd54: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x10bd54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x10bd58: 0xc046458  jal         func_119160
    ctx->pc = 0x10BD58u;
    SET_GPR_U32(ctx, 31, 0x10BD60u);
    ctx->pc = 0x10BD5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10BD58u;
    // 0x10bd5c: 0xa68243f0  sh          $v0, 0x43F0($s4) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 20), 17392), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119160u, 0x10BD58u, 0x10BD60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10BD60u;
label_10bd60:
    // 0x10bd60: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x10bd60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bd64: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x10bd64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bd68: 0x3c023ecc  lui         $v0, 0x3ECC
    ctx->pc = 0x10bd68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16076 << 16));
    // 0x10bd6c: 0x26660370  addiu       $a2, $s3, 0x370
    ctx->pc = 0x10bd6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 880));
    // 0x10bd70: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x10bd70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x10bd74: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x10bd74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x10bd78: 0xc059a68  jal         func_1669A0
    ctx->pc = 0x10BD78u;
    SET_GPR_U32(ctx, 31, 0x10BD80u);
    ctx->pc = 0x10BD7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10BD78u;
    // 0x10bd7c: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1669A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1669A0u, 0x10BD78u, 0x10BD80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10BD80u;
label_10bd80:
    // 0x10bd80: 0x8f8283a8  lw          $v0, -0x7C58($gp)
    ctx->pc = 0x10bd80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935464)));
    // 0x10bd84: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x10bd84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x10bd88: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x10bd88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x10bd8c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10bd8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bd90: 0xc0465f0  jal         func_1197C0
    ctx->pc = 0x10BD90u;
    SET_GPR_U32(ctx, 31, 0x10BD98u);
    ctx->pc = 0x10BD94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10BD90u;
    // 0x10bd94: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1197C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1197C0u, 0x10BD90u, 0x10BD98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10BD98u;
label_10bd98:
    // 0x10bd98: 0x1000006a  b           . + 4 + (0x6A << 2)
    ctx->pc = 0x10BD98u;
    {
        const bool branch_taken_0x10bd98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10BD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BD98u;
        // 0x10bd9c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bd98) {
            ctx->pc = 0x10BF44u;
            return;
        }
    }
    ctx->pc = 0x10BDA0u;
}
