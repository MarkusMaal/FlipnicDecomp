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

// Function: entry_00107138
// Address: 0x107138 - 0x107170
void entry_00107138_0x107138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00107138_0x107138");
#endif

    switch (ctx->pc) {
        case 0x107160u: goto label_107160;
        default: break;
    }

    ctx->pc = 0x107138u;

label_107138:
    // 0x107138: 0x8e620210  lw          $v0, 0x210($s3)
    ctx->pc = 0x107138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 528)));
    // 0x10713c: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x10713cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x107140: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x107140u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x107144: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x107144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x107148: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x107148u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10714c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x10714cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x107150: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x107150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x107154: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x107154u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x107158: 0xc0425a4  jal         func_109690
    ctx->pc = 0x107158u;
    SET_GPR_U32(ctx, 31, 0x107160u);
    ctx->pc = 0x10715Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107158u;
    // 0x10715c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109690u, 0x107158u, 0x107160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107160u;
label_107160:
    // 0x107160: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x107160u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x107164: 0x2a230003  slti        $v1, $s1, 0x3
    ctx->pc = 0x107164u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x107168: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x107168u;
    {
        const bool branch_taken_0x107168 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x10716Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107168u;
        // 0x10716c: 0x26520002  addiu       $s2, $s2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107168) {
            ctx->pc = 0x107138u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_107138;
        }
    }
    ctx->pc = 0x107170u;
}
