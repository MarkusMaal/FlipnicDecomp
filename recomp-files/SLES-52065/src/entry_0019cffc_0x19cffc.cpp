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

// Function: entry_0019cffc
// Address: 0x19cffc - 0x19d054
void entry_0019cffc_0x19cffc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019cffc_0x19cffc");
#endif

    switch (ctx->pc) {
        case 0x19d010u: goto label_19d010;
        case 0x19d034u: goto label_19d034;
        default: break;
    }

    ctx->pc = 0x19cffcu;

    // 0x19cffc: 0x0  nop
    ctx->pc = 0x19cffcu;
    // NOP
    // 0x19d000: 0x8e850670  lw          $a1, 0x670($s4)
    ctx->pc = 0x19d000u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1648)));
    // 0x19d004: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x19d004u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d008: 0xc064cac  jal         func_1932B0
    ctx->pc = 0x19D008u;
    SET_GPR_U32(ctx, 31, 0x19D010u);
    ctx->pc = 0x19D00Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D008u;
    // 0x19d00c: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1932B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1932B0u, 0x19D008u, 0x19D010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D010u;
label_19d010:
    // 0x19d010: 0x8e830914  lw          $v1, 0x914($s4)
    ctx->pc = 0x19d010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2324)));
    // 0x19d014: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19d014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19d018: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19d018u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19d01c: 0x12e2000d  beq         $s7, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x19D01Cu;
    {
        const bool branch_taken_0x19d01c = (GPR_U64(ctx, 23) == GPR_U64(ctx, 2));
        ctx->pc = 0x19D020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D01Cu;
        // 0x19d020: 0xae830914  sw          $v1, 0x914($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 2324), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d01c) {
            ctx->pc = 0x19D054u;
            return;
        }
    }
    ctx->pc = 0x19D024u;
    // 0x19d024: 0x8e850670  lw          $a1, 0x670($s4)
    ctx->pc = 0x19d024u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1648)));
    // 0x19d028: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x19d028u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d02c: 0xc064cac  jal         func_1932B0
    ctx->pc = 0x19D02Cu;
    SET_GPR_U32(ctx, 31, 0x19D034u);
    ctx->pc = 0x19D030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D02Cu;
    // 0x19d030: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1932B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1932B0u, 0x19D02Cu, 0x19D034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D034u;
label_19d034:
    // 0x19d034: 0x8e82090c  lw          $v0, 0x90C($s4)
    ctx->pc = 0x19d034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2316)));
    // 0x19d038: 0x26e4ffff  addiu       $a0, $s7, -0x1
    ctx->pc = 0x19d038u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967295));
    // 0x19d03c: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x19d03cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x19d040: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x19d040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x19d044: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x19d044u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x19d048: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19d048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19d04c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x19D04Cu;
    {
        const bool branch_taken_0x19d04c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D04Cu;
        // 0x19d050: 0xae82090c  sw          $v0, 0x90C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 2316), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d04c) {
            ctx->pc = 0x19D068u;
            return;
        }
    }
    ctx->pc = 0x19D054u;
}
