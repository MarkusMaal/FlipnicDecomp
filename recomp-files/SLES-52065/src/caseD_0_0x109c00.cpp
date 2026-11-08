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

// Function: caseD_0
// Address: 0x109c00 - 0x109c4c
void caseD_0_0x109c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x109c00");
#endif

    switch (ctx->pc) {
        case 0x109c1cu: goto label_109c1c;
        case 0x109c44u: goto label_109c44;
        default: break;
    }

    ctx->pc = 0x109c00u;

    // 0x109c00: 0x86300002  lh          $s0, 0x2($s1)
    ctx->pc = 0x109c00u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x109c04: 0x8f828218  lw          $v0, -0x7DE8($gp)
    ctx->pc = 0x109c04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
    // 0x109c08: 0x86310004  lh          $s1, 0x4($s1)
    ctx->pc = 0x109c08u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x109c0c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x109c0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109c10: 0x24442c00  addiu       $a0, $v0, 0x2C00
    ctx->pc = 0x109c10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11264));
    // 0x109c14: 0xc0583d4  jal         func_160F50
    ctx->pc = 0x109C14u;
    SET_GPR_U32(ctx, 31, 0x109C1Cu);
    ctx->pc = 0x109C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109C14u;
    // 0x109c18: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x160F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x160F50u, 0x109C14u, 0x109C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109C1Cu;
label_109c1c:
    // 0x109c1c: 0x8f838218  lw          $v1, -0x7DE8($gp)
    ctx->pc = 0x109c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
    // 0x109c20: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x109c20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x109c24: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x109c24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x109c28: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x109c28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x109c2c: 0x8c632c1c  lw          $v1, 0x2C1C($v1)
    ctx->pc = 0x109c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11292)));
    // 0x109c30: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x109c30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x109c34: 0x84450002  lh          $a1, 0x2($v0)
    ctx->pc = 0x109c34u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x109c38: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x109c38u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x109c3c: 0xc05fb2c  jal         func_17ECB0
    ctx->pc = 0x109C3Cu;
    SET_GPR_U32(ctx, 31, 0x109C44u);
    ctx->pc = 0x109C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109C3Cu;
    // 0x109c40: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17ECB0u, 0x109C3Cu, 0x109C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109C44u;
label_109c44:
    // 0x109c44: 0x1000016a  b           . + 4 + (0x16A << 2)
    ctx->pc = 0x109C44u;
    {
        const bool branch_taken_0x109c44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x109c44) {
            ctx->pc = 0x10A1F0u;
            return;
        }
    }
    ctx->pc = 0x109C4Cu;
}
