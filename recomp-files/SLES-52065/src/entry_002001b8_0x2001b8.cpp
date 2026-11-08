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

// Function: entry_002001b8
// Address: 0x2001b8 - 0x2001f0
void entry_002001b8_0x2001b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002001b8_0x2001b8");
#endif

    switch (ctx->pc) {
        case 0x2001dcu: goto label_2001dc;
        default: break;
    }

    ctx->pc = 0x2001b8u;

    // 0x2001b8: 0x118883  sra         $s1, $s1, 2
    ctx->pc = 0x2001b8u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 2));
    // 0x2001bc: 0x12200023  beqz        $s1, . + 4 + (0x23 << 2)
    ctx->pc = 0x2001BCu;
    {
        const bool branch_taken_0x2001bc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2001C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2001BCu;
        // 0x2001c0: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2001bc) {
            ctx->pc = 0x20024Cu;
            return;
        }
    }
    ctx->pc = 0x2001C4u;
    // 0x2001c4: 0x8e700048  lw          $s0, 0x48($s3)
    ctx->pc = 0x2001c4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 72)));
    // 0x2001c8: 0x16000013  bnez        $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2001C8u;
    {
        const bool branch_taken_0x2001c8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2001CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2001C8u;
        // 0x2001cc: 0x32220001  andi        $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2001c8) {
            ctx->pc = 0x200218u;
            return;
        }
    }
    ctx->pc = 0x2001D0u;
    // 0x2001d0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2001d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2001d4: 0xc07ffc0  jal         func_1FFF00
    ctx->pc = 0x2001D4u;
    SET_GPR_U32(ctx, 31, 0x2001DCu);
    ctx->pc = 0x2001D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2001D4u;
    // 0x2001d8: 0x24050271  addiu       $a1, $zero, 0x271 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 625));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FFF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FFF00u, 0x2001D4u, 0x2001DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2001DCu;
label_2001dc:
    // 0x2001dc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2001dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2001e0: 0xae620048  sw          $v0, 0x48($s3)
    ctx->pc = 0x2001e0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 72), GPR_U32(ctx, 2));
    // 0x2001e4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2001E4u;
    {
        const bool branch_taken_0x2001e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2001E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2001E4u;
        // 0x2001e8: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2001e4) {
            ctx->pc = 0x200214u;
            return;
        }
    }
    ctx->pc = 0x2001ECu;
    // 0x2001ec: 0x0  nop
    ctx->pc = 0x2001ecu;
    // NOP
    ctx->pc = 0x2001f0u;
}
