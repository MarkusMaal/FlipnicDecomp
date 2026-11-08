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

// Function: entry_0016daf0
// Address: 0x16daf0 - 0x16db30
void entry_0016daf0_0x16daf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016daf0_0x16daf0");
#endif

    switch (ctx->pc) {
        case 0x16daf8u: goto label_16daf8;
        case 0x16db1cu: goto label_16db1c;
        case 0x16db28u: goto label_16db28;
        default: break;
    }

    ctx->pc = 0x16daf0u;

    // 0x16daf0: 0xc06cde4  jal         func_1B3790
    ctx->pc = 0x16DAF0u;
    SET_GPR_U32(ctx, 31, 0x16DAF8u);
    ctx->pc = 0x16DAF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DAF0u;
    // 0x16daf4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3790u, 0x16DAF0u, 0x16DAF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DAF8u;
label_16daf8:
    // 0x16daf8: 0x8e832c1c  lw          $v1, 0x2C1C($s4)
    ctx->pc = 0x16daf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11292)));
    // 0x16dafc: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x16dafcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x16db00: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x16db00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x16db04: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16db04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16db08: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x16db08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x16db0c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16db0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16db10: 0x9045003f  lbu         $a1, 0x3F($v0)
    ctx->pc = 0x16db10u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 63)));
    // 0x16db14: 0xc06ce04  jal         func_1B3810
    ctx->pc = 0x16DB14u;
    SET_GPR_U32(ctx, 31, 0x16DB1Cu);
    ctx->pc = 0x16DB18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DB14u;
    // 0x16db18: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3810u, 0x16DB14u, 0x16DB1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DB1Cu;
label_16db1c:
    // 0x16db1c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16db1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16db20: 0xc06cdfc  jal         func_1B37F0
    ctx->pc = 0x16DB20u;
    SET_GPR_U32(ctx, 31, 0x16DB28u);
    ctx->pc = 0x16DB24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DB20u;
    // 0x16db24: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B37F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B37F0u, 0x16DB20u, 0x16DB28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DB28u;
label_16db28:
    // 0x16db28: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x16DB28u;
    {
        const bool branch_taken_0x16db28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16db28) {
            ctx->pc = 0x16DB98u;
            return;
        }
    }
    ctx->pc = 0x16DB30u;
}
