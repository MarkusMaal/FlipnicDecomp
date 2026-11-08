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

// Function: entry_00107ae0
// Address: 0x107ae0 - 0x107b4c
void entry_00107ae0_0x107ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00107ae0_0x107ae0");
#endif

    switch (ctx->pc) {
        case 0x107b20u: goto label_107b20;
        case 0x107b30u: goto label_107b30;
        case 0x107b40u: goto label_107b40;
        default: break;
    }

    ctx->pc = 0x107ae0u;

label_107ae0:
    // 0x107ae0: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x107ae0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x107ae4: 0x24a5fd90  addiu       $a1, $a1, -0x270
    ctx->pc = 0x107ae4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966672));
    // 0x107ae8: 0xb19021  addu        $s2, $a1, $s1
    ctx->pc = 0x107ae8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x107aec: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x107aecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x107af0: 0x8e430024  lw          $v1, 0x24($s2)
    ctx->pc = 0x107af0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x107af4: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x107af4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x107af8: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x107AF8u;
    {
        const bool branch_taken_0x107af8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x107AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107AF8u;
        // 0x107afc: 0x26030001  addiu       $v1, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107af8) {
            ctx->pc = 0x107B4Cu;
            return;
        }
    }
    ctx->pc = 0x107B00u;
    // 0x107b00: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x107b00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x107b04: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x107b04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x107b08: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x107b08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x107b0c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x107b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x107b10: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x107b10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x107b14: 0xa29821  addu        $s3, $a1, $v0
    ctx->pc = 0x107b14u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x107b18: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x107B18u;
    SET_GPR_U32(ctx, 31, 0x107B20u);
    ctx->pc = 0x107B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107B18u;
    // 0x107b1c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x107B18u, 0x107B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107B20u;
label_107b20:
    // 0x107b20: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x107b20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107b24: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x107b24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107b28: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x107B28u;
    SET_GPR_U32(ctx, 31, 0x107B30u);
    ctx->pc = 0x107B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107B28u;
    // 0x107b2c: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x107B28u, 0x107B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107B30u;
label_107b30:
    // 0x107b30: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x107b30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107b34: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x107b34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x107b38: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x107B38u;
    SET_GPR_U32(ctx, 31, 0x107B40u);
    ctx->pc = 0x107B3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107B38u;
    // 0x107b3c: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x107B38u, 0x107B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107B40u;
label_107b40:
    // 0x107b40: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x107b40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x107b44: 0x601ffe6  bgez        $s0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x107B44u;
    {
        const bool branch_taken_0x107b44 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x107B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107B44u;
        // 0x107b48: 0x2631ffe8  addiu       $s1, $s1, -0x18 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107b44) {
            ctx->pc = 0x107AE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_107ae0;
        }
    }
    ctx->pc = 0x107B4Cu;
}
