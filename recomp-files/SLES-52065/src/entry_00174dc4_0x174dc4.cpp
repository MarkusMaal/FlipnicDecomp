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

// Function: entry_00174dc4
// Address: 0x174dc4 - 0x174dec
void entry_00174dc4_0x174dc4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00174dc4_0x174dc4");
#endif

    switch (ctx->pc) {
        case 0x174de4u: goto label_174de4;
        default: break;
    }

    ctx->pc = 0x174dc4u;

    // 0x174dc4: 0x8e2300f8  lw          $v1, 0xF8($s1)
    ctx->pc = 0x174dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 248)));
    // 0x174dc8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x174dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x174dcc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x174dccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x174dd0: 0x8e250018  lw          $a1, 0x18($s1)
    ctx->pc = 0x174dd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x174dd4: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x174dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x174dd8: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x174dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x174ddc: 0xc05c620  jal         func_171880
    ctx->pc = 0x174DDCu;
    SET_GPR_U32(ctx, 31, 0x174DE4u);
    ctx->pc = 0x174DE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174DDCu;
    // 0x174de0: 0x24440028  addiu       $a0, $v0, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171880u, 0x174DDCu, 0x174DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174DE4u;
label_174de4:
    // 0x174de4: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x174DE4u;
    {
        const bool branch_taken_0x174de4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x174DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174DE4u;
        // 0x174de8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174de4) {
            ctx->pc = 0x174E3Cu;
            return;
        }
    }
    ctx->pc = 0x174DECu;
}
