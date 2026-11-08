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

// Function: entry_001ea040
// Address: 0x1ea040 - 0x1ea070
void entry_001ea040_0x1ea040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ea040_0x1ea040");
#endif

    ctx->pc = 0x1ea040u;

label_1ea040:
    // 0x1ea040: 0x8e680008  lw          $t0, 0x8($s3)
    ctx->pc = 0x1ea040u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_1ea044:
    // 0x1ea044: 0x91120000  lbu         $s2, 0x0($t0)
    ctx->pc = 0x1ea044u;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1ea048:
    // 0x1ea048: 0x3243001f  andi        $v1, $s2, 0x1F
    ctx->pc = 0x1ea048u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)31);
label_1ea04c:
    // 0x1ea04c: 0x2c610010  sltiu       $at, $v1, 0x10
    ctx->pc = 0x1ea04cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_1ea050:
    // 0x1ea050: 0x102001e0  beqz        $at, . + 4 + (0x1E0 << 2)
label_1ea054:
    if (ctx->pc == 0x1EA054u) {
        ctx->pc = 0x1EA054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA050u;
        // 0x1ea054: 0x3c040022  lui         $a0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA058u;
        goto label_1ea058;
    }
    ctx->pc = 0x1EA050u;
    {
        const bool branch_taken_0x1ea050 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA050u;
        // 0x1ea054: 0x3c040022  lui         $a0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea050) {
            ctx->pc = 0x1EA7D4u;
            return;
        }
    }
    ctx->pc = 0x1EA058u;
label_1ea058:
    // 0x1ea058: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1ea058u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1ea05c:
    // 0x1ea05c: 0x24844100  addiu       $a0, $a0, 0x4100
    ctx->pc = 0x1ea05cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16640));
label_1ea060:
    // 0x1ea060: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1ea060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1ea064:
    // 0x1ea064: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1ea064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1ea068:
    // 0x1ea068: 0x600008  jr          $v1
label_1ea06c:
    if (ctx->pc == 0x1EA06Cu) {
        ctx->pc = 0x1EA070u;
        goto label_fallthrough_0x1ea068;
    }
    ctx->pc = 0x1EA068u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EA068u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x1ea068:
    ctx->pc = 0x1EA070u;
}
