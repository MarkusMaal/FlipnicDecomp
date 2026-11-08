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

// Function: entry_0010aafc
// Address: 0x10aafc - 0x10ab40
void entry_0010aafc_0x10aafc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010aafc_0x10aafc");
#endif

    switch (ctx->pc) {
        case 0x10ab18u: goto label_10ab18;
        default: break;
    }

    ctx->pc = 0x10aafcu;

    // 0x10aafc: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x10aafcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x10ab00: 0x24050017  addiu       $a1, $zero, 0x17
    ctx->pc = 0x10ab00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x10ab04: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x10ab04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x10ab08: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x10ab08u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ab0c: 0x24512c00  addiu       $s1, $v0, 0x2C00
    ctx->pc = 0x10ab0cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 11264));
    // 0x10ab10: 0xc0583b8  jal         func_160EE0
    ctx->pc = 0x10AB10u;
    SET_GPR_U32(ctx, 31, 0x10AB18u);
    ctx->pc = 0x10AB14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AB10u;
    // 0x10ab14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x160EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x160EE0u, 0x10AB10u, 0x10AB18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AB18u;
label_10ab18:
    // 0x10ab18: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x10ab18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x10ab1c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x10ab1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x10ab20: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x10ab20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x10ab24: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x10ab24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x10ab28: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x10ab28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x10ab2c: 0x9042003f  lbu         $v0, 0x3F($v0)
    ctx->pc = 0x10ab2cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 63)));
    // 0x10ab30: 0x10500003  beq         $v0, $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10AB30u;
    {
        const bool branch_taken_0x10ab30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x10ab30) {
            ctx->pc = 0x10AB40u;
            return;
        }
    }
    ctx->pc = 0x10AB38u;
    // 0x10ab38: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x10ab38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x10ab3c: 0xae622308  sw          $v0, 0x2308($s3)
    ctx->pc = 0x10ab3cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8968), GPR_U32(ctx, 2));
    ctx->pc = 0x10ab40u;
}
