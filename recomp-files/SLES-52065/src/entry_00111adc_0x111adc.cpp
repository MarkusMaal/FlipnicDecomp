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

// Function: entry_00111adc
// Address: 0x111adc - 0x111b0c
void entry_00111adc_0x111adc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00111adc_0x111adc");
#endif

    switch (ctx->pc) {
        case 0x111b04u: goto label_111b04;
        default: break;
    }

    ctx->pc = 0x111adcu;

    // 0x111adc: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x111adcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x111ae0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x111ae0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111ae4: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x111ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x111ae8: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x111ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x111aec: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x111aecu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x111af0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x111af0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x111af4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x111af4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x111af8: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x111af8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    // 0x111afc: 0xc043da0  jal         func_10F680
    ctx->pc = 0x111AFCu;
    SET_GPR_U32(ctx, 31, 0x111B04u);
    ctx->pc = 0x111B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111AFCu;
    // 0x111b00: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F680u, 0x111AFCu, 0x111B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111B04u;
label_111b04:
    // 0x111b04: 0x26520002  addiu       $s2, $s2, 0x2
    ctx->pc = 0x111b04u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
    // 0x111b08: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x111b08u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->pc = 0x111b0cu;
}
