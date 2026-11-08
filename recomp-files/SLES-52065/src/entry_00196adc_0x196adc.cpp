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

// Function: entry_00196adc
// Address: 0x196adc - 0x196b00
void entry_00196adc_0x196adc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00196adc_0x196adc");
#endif

    switch (ctx->pc) {
        case 0x196af8u: goto label_196af8;
        default: break;
    }

    ctx->pc = 0x196adcu;

label_196adc:
    // 0x196adc: 0x12a0009b  beqz        $s5, . + 4 + (0x9B << 2)
label_196ae0:
    if (ctx->pc == 0x196AE0u) {
        ctx->pc = 0x196AE4u;
        goto label_196ae4;
    }
    ctx->pc = 0x196ADCu;
    {
        const bool branch_taken_0x196adc = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x196adc) {
            ctx->pc = 0x196D4Cu;
            return;
        }
    }
    ctx->pc = 0x196AE4u;
label_196ae4:
    // 0x196ae4: 0x8eb9031c  lw          $t9, 0x31C($s5)
    ctx->pc = 0x196ae4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 796)));
label_196ae8:
    // 0x196ae8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x196ae8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_196aec:
    // 0x196aec: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x196aecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_196af0:
    // 0x196af0: 0x320f809  jalr        $t9
label_196af4:
    if (ctx->pc == 0x196AF4u) {
        ctx->pc = 0x196AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196AF0u;
        // 0x196af4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196AF8u;
        goto label_196af8;
    }
    ctx->pc = 0x196AF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x196AF8u);
        ctx->pc = 0x196AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196AF0u;
        // 0x196af4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x196AF0u, 0x196AF8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x196AF8u;
label_196af8:
    // 0x196af8: 0x10000095  b           . + 4 + (0x95 << 2)
label_196afc:
    if (ctx->pc == 0x196AFCu) {
        ctx->pc = 0x196AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196AF8u;
        // 0x196afc: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196B00u;
        goto label_fallthrough_0x196af8;
    }
    ctx->pc = 0x196AF8u;
    {
        const bool branch_taken_0x196af8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x196AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196AF8u;
        // 0x196afc: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196af8) {
            ctx->pc = 0x196D50u;
            return;
        }
    }
label_fallthrough_0x196af8:
    ctx->pc = 0x196B00u;
}
