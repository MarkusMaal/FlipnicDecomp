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

// Function: entry_00156b94
// Address: 0x156b94 - 0x156bf4
void entry_00156b94_0x156b94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00156b94_0x156b94");
#endif

    switch (ctx->pc) {
        case 0x156bf0u: goto label_156bf0;
        default: break;
    }

    ctx->pc = 0x156b94u;

    // 0x156b94: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x156b94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x156b98: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x156b98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x156b9c: 0xae060214  sw          $a2, 0x214($s0)
    ctx->pc = 0x156b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 6));
    // 0x156ba0: 0xae030200  sw          $v1, 0x200($s0)
    ctx->pc = 0x156ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 3));
    // 0x156ba4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x156ba4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x156ba8: 0xae030204  sw          $v1, 0x204($s0)
    ctx->pc = 0x156ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 516), GPR_U32(ctx, 3));
    // 0x156bac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x156bacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156bb0: 0xae060224  sw          $a2, 0x224($s0)
    ctx->pc = 0x156bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 548), GPR_U32(ctx, 6));
    // 0x156bb4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x156bb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156bb8: 0xae030200  sw          $v1, 0x200($s0)
    ctx->pc = 0x156bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 3));
    // 0x156bbc: 0xae030204  sw          $v1, 0x204($s0)
    ctx->pc = 0x156bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 516), GPR_U32(ctx, 3));
    // 0x156bc0: 0xae060234  sw          $a2, 0x234($s0)
    ctx->pc = 0x156bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 564), GPR_U32(ctx, 6));
    // 0x156bc4: 0xae030200  sw          $v1, 0x200($s0)
    ctx->pc = 0x156bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 3));
    // 0x156bc8: 0xae030204  sw          $v1, 0x204($s0)
    ctx->pc = 0x156bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 516), GPR_U32(ctx, 3));
    // 0x156bcc: 0xae060244  sw          $a2, 0x244($s0)
    ctx->pc = 0x156bccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 580), GPR_U32(ctx, 6));
    // 0x156bd0: 0xae030200  sw          $v1, 0x200($s0)
    ctx->pc = 0x156bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 3));
    // 0x156bd4: 0xae030204  sw          $v1, 0x204($s0)
    ctx->pc = 0x156bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 516), GPR_U32(ctx, 3));
    // 0x156bd8: 0xae060254  sw          $a2, 0x254($s0)
    ctx->pc = 0x156bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 596), GPR_U32(ctx, 6));
    // 0x156bdc: 0xae030200  sw          $v1, 0x200($s0)
    ctx->pc = 0x156bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 3));
    // 0x156be0: 0xae030204  sw          $v1, 0x204($s0)
    ctx->pc = 0x156be0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 516), GPR_U32(ctx, 3));
    // 0x156be4: 0xa60001ea  sh          $zero, 0x1EA($s0)
    ctx->pc = 0x156be4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 490), (uint16_t)GPR_U32(ctx, 0));
    // 0x156be8: 0xc0561f4  jal         func_1587D0
    ctx->pc = 0x156BE8u;
    SET_GPR_U32(ctx, 31, 0x156BF0u);
    ctx->pc = 0x156BECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156BE8u;
    // 0x156bec: 0xa60301f0  sh          $v1, 0x1F0($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 496), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1587D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1587D0u, 0x156BE8u, 0x156BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156BF0u;
label_156bf0:
    // 0x156bf0: 0xaf808604  sw          $zero, -0x79FC($gp)
    ctx->pc = 0x156bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936068), GPR_U32(ctx, 0));
    ctx->pc = 0x156bf4u;
}
