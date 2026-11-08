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

// Function: entry_0010aab8
// Address: 0x10aab8 - 0x10aafc
void entry_0010aab8_0x10aab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010aab8_0x10aab8");
#endif

    switch (ctx->pc) {
        case 0x10aad4u: goto label_10aad4;
        default: break;
    }

    ctx->pc = 0x10aab8u;

    // 0x10aab8: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x10aab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x10aabc: 0x24050017  addiu       $a1, $zero, 0x17
    ctx->pc = 0x10aabcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x10aac0: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x10aac0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x10aac4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x10aac4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10aac8: 0x24512c00  addiu       $s1, $v0, 0x2C00
    ctx->pc = 0x10aac8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 11264));
    // 0x10aacc: 0xc0583b8  jal         func_160EE0
    ctx->pc = 0x10AACCu;
    SET_GPR_U32(ctx, 31, 0x10AAD4u);
    ctx->pc = 0x10AAD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AACCu;
    // 0x10aad0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x160EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x160EE0u, 0x10AACCu, 0x10AAD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AAD4u;
label_10aad4:
    // 0x10aad4: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x10aad4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x10aad8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x10aad8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x10aadc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x10aadcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x10aae0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x10aae0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x10aae4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x10aae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x10aae8: 0x9042003f  lbu         $v0, 0x3F($v0)
    ctx->pc = 0x10aae8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 63)));
    // 0x10aaec: 0x10500003  beq         $v0, $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10AAECu;
    {
        const bool branch_taken_0x10aaec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x10aaec) {
            ctx->pc = 0x10AAFCu;
            return;
        }
    }
    ctx->pc = 0x10AAF4u;
    // 0x10aaf4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x10aaf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x10aaf8: 0xae622304  sw          $v0, 0x2304($s3)
    ctx->pc = 0x10aaf8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8964), GPR_U32(ctx, 2));
    ctx->pc = 0x10aafcu;
}
