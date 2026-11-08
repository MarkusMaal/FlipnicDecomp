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

// Function: entry_001a927c
// Address: 0x1a927c - 0x1a92d0
void entry_001a927c_0x1a927c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a927c_0x1a927c");
#endif

    switch (ctx->pc) {
        case 0x1a9290u: goto label_1a9290;
        default: break;
    }

    ctx->pc = 0x1a927cu;

label_1a927c:
    // 0x1a927c: 0x8e820af0  lw          $v0, 0xAF0($s4)
    ctx->pc = 0x1a927cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2800)));
label_1a9280:
    // 0x1a9280: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1a9280u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1a9284:
    // 0x1a9284: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a9284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1a9288:
    // 0x1a9288: 0xc06a51c  jal         func_1A9470
label_1a928c:
    if (ctx->pc == 0x1A928Cu) {
        ctx->pc = 0x1A928Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9288u;
        // 0x1a928c: 0xae820af0  sw          $v0, 0xAF0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 2800), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9290u;
        goto label_1a9290;
    }
    ctx->pc = 0x1A9288u;
    SET_GPR_U32(ctx, 31, 0x1A9290u);
    ctx->pc = 0x1A928Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9288u;
    // 0x1a928c: 0xae820af0  sw          $v0, 0xAF0($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 2800), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A9470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A9470u, 0x1A9288u, 0x1A9290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9290u;
label_1a9290:
    // 0x1a9290: 0x8e8409c0  lw          $a0, 0x9C0($s4)
    ctx->pc = 0x1a9290u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2496)));
label_1a9294:
    // 0x1a9294: 0x8e8309c4  lw          $v1, 0x9C4($s4)
    ctx->pc = 0x1a9294u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2500)));
label_1a9298:
    // 0x1a9298: 0x1483000d  bne         $a0, $v1, . + 4 + (0xD << 2)
label_1a929c:
    if (ctx->pc == 0x1A929Cu) {
        ctx->pc = 0x1A92A0u;
        goto label_1a92a0;
    }
    ctx->pc = 0x1A9298u;
    {
        const bool branch_taken_0x1a9298 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1a9298) {
            ctx->pc = 0x1A92D0u;
            return;
        }
    }
    ctx->pc = 0x1A92A0u;
label_1a92a0:
    // 0x1a92a0: 0x8f84870c  lw          $a0, -0x78F4($gp)
    ctx->pc = 0x1a92a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936332)));
label_1a92a4:
    // 0x1a92a4: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x1a92a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
label_1a92a8:
    // 0x1a92a8: 0x2463dfb0  addiu       $v1, $v1, -0x2050
    ctx->pc = 0x1a92a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959024));
label_1a92ac:
    // 0x1a92ac: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a92acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a92b0:
    // 0x1a92b0: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x1a92b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_1a92b4:
    // 0x1a92b4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1a92b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1a92b8:
    // 0x1a92b8: 0x12800005  beqz        $s4, . + 4 + (0x5 << 2)
label_1a92bc:
    if (ctx->pc == 0x1A92BCu) {
        ctx->pc = 0x1A92BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A92B8u;
        // 0x1a92bc: 0xa0650000  sb          $a1, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A92C0u;
        goto label_1a92c0;
    }
    ctx->pc = 0x1A92B8u;
    {
        const bool branch_taken_0x1a92b8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A92BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A92B8u;
        // 0x1a92bc: 0xa0650000  sb          $a1, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a92b8) {
            ctx->pc = 0x1A92D0u;
            return;
        }
    }
    ctx->pc = 0x1A92C0u;
label_1a92c0:
    // 0x1a92c0: 0x8e99031c  lw          $t9, 0x31C($s4)
    ctx->pc = 0x1a92c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 796)));
label_1a92c4:
    // 0x1a92c4: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1a92c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1a92c8:
    // 0x1a92c8: 0x320f809  jalr        $t9
label_1a92cc:
    if (ctx->pc == 0x1A92CCu) {
        ctx->pc = 0x1A92CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A92C8u;
        // 0x1a92cc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A92D0u;
        goto label_fallthrough_0x1a92c8;
    }
    ctx->pc = 0x1A92C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A92D0u);
        ctx->pc = 0x1A92CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A92C8u;
        // 0x1a92cc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A92C8u, 0x1A92D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x1a92c8:
    ctx->pc = 0x1A92D0u;
}
