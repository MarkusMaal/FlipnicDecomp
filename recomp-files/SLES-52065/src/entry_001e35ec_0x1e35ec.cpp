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

// Function: entry_001e35ec
// Address: 0x1e35ec - 0x1e362c
void entry_001e35ec_0x1e35ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e35ec_0x1e35ec");
#endif

    switch (ctx->pc) {
        case 0x1e3614u: goto label_1e3614;
        default: break;
    }

    ctx->pc = 0x1e35ecu;

    // 0x1e35ec: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1e35ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1e35f0: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1E35F0u;
    {
        const bool branch_taken_0x1e35f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e35f0) {
            ctx->pc = 0x1E362Cu;
            return;
        }
    }
    ctx->pc = 0x1E35F8u;
    // 0x1e35f8: 0x92620040  lbu         $v0, 0x40($s3)
    ctx->pc = 0x1e35f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 64)));
    // 0x1e35fc: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1E35FCu;
    {
        const bool branch_taken_0x1e35fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e35fc) {
            ctx->pc = 0x1E362Cu;
            return;
        }
    }
    ctx->pc = 0x1E3604u;
    // 0x1e3604: 0x6010009  bgez        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E3604u;
    {
        const bool branch_taken_0x1e3604 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x1E3608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3604u;
        // 0x1e3608: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3604) {
            ctx->pc = 0x1E362Cu;
            return;
        }
    }
    ctx->pc = 0x1E360Cu;
    // 0x1e360c: 0xc079574  jal         func_1E55D0
    ctx->pc = 0x1E360Cu;
    SET_GPR_U32(ctx, 31, 0x1E3614u);
    ctx->pc = 0x1E55D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E55D0u, 0x1E360Cu, 0x1E3614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3614u;
label_1e3614:
    // 0x1e3614: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E3614u;
    {
        const bool branch_taken_0x1e3614 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E3618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3614u;
        // 0x1e3618: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3614) {
            ctx->pc = 0x1E362Cu;
            return;
        }
    }
    ctx->pc = 0x1E361Cu;
    // 0x1e361c: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x1e361cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3620: 0xfe830000  sd          $v1, 0x0($s4)
    ctx->pc = 0x1e3620u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 3));
    // 0x1e3624: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1E3624u;
    {
        const bool branch_taken_0x1e3624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3624u;
        // 0x1e3628: 0xae800008  sw          $zero, 0x8($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3624) {
            ctx->pc = 0x1E3680u;
            return;
        }
    }
    ctx->pc = 0x1E362Cu;
}
