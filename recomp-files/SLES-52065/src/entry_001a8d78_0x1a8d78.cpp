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

// Function: entry_001a8d78
// Address: 0x1a8d78 - 0x1a8db4
void entry_001a8d78_0x1a8d78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a8d78_0x1a8d78");
#endif

    switch (ctx->pc) {
        case 0x1a8da4u: goto label_1a8da4;
        default: break;
    }

    ctx->pc = 0x1a8d78u;

label_1a8d78:
    // 0x1a8d78: 0x8c8406b0  lw          $a0, 0x6B0($a0)
    ctx->pc = 0x1a8d78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1712)));
label_1a8d7c:
    // 0x1a8d7c: 0x8f8385f4  lw          $v1, -0x7A0C($gp)
    ctx->pc = 0x1a8d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_1a8d80:
    // 0x1a8d80: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1a8d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1a8d84:
    // 0x1a8d84: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1a8d84u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1a8d88:
    // 0x1a8d88: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1a8d88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1a8d8c:
    // 0x1a8d8c: 0x8c712cd8  lw          $s1, 0x2CD8($v1)
    ctx->pc = 0x1a8d8cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
label_1a8d90:
    // 0x1a8d90: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x1a8d90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1a8d94:
    // 0x1a8d94: 0x8e390008  lw          $t9, 0x8($s1)
    ctx->pc = 0x1a8d94u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1a8d98:
    // 0x1a8d98: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x1a8d98u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_1a8d9c:
    // 0x1a8d9c: 0x320f809  jalr        $t9
label_1a8da0:
    if (ctx->pc == 0x1A8DA0u) {
        ctx->pc = 0x1A8DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8D9Cu;
        // 0x1a8da0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8DA4u;
        goto label_1a8da4;
    }
    ctx->pc = 0x1A8D9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A8DA4u);
        ctx->pc = 0x1A8DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8D9Cu;
        // 0x1a8da0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A8D9Cu, 0x1A8DA4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A8DA4u;
label_1a8da4:
    // 0x1a8da4: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1a8da4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1a8da8:
    // 0x1a8da8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a8da8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a8dac:
    // 0x1a8dac: 0xc05eed0  jal         func_17BB40
label_1a8db0:
    if (ctx->pc == 0x1A8DB0u) {
        ctx->pc = 0x1A8DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8DACu;
        // 0x1a8db0: 0x24450001  addiu       $a1, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8DB4u;
        goto label_fallthrough_0x1a8dac;
    }
    ctx->pc = 0x1A8DACu;
    SET_GPR_U32(ctx, 31, 0x1A8DB4u);
    ctx->pc = 0x1A8DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8DACu;
    // 0x1a8db0: 0x24450001  addiu       $a1, $v0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17BB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17BB40u, 0x1A8DACu, 0x1A8DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_fallthrough_0x1a8dac:
    ctx->pc = 0x1A8DB4u;
}
