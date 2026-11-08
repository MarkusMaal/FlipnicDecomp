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

// Function: entry_00188b30
// Address: 0x188b30 - 0x188b7c
void entry_00188b30_0x188b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00188b30_0x188b30");
#endif

    switch (ctx->pc) {
        case 0x188b40u: goto label_188b40;
        case 0x188b50u: goto label_188b50;
        default: break;
    }

    ctx->pc = 0x188b30u;

    // 0x188b30: 0x27a400c8  addiu       $a0, $sp, 0xC8
    ctx->pc = 0x188b30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
    // 0x188b34: 0x27a500cc  addiu       $a1, $sp, 0xCC
    ctx->pc = 0x188b34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 204));
    // 0x188b38: 0xc062214  jal         func_188850
    ctx->pc = 0x188B38u;
    SET_GPR_U32(ctx, 31, 0x188B40u);
    ctx->pc = 0x188B3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188B38u;
    // 0x188b3c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188850u, 0x188B38u, 0x188B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188B40u;
label_188b40:
    // 0x188b40: 0x8fa500c8  lw          $a1, 0xC8($sp)
    ctx->pc = 0x188b40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x188b44: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x188b44u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188b48: 0xc062874  jal         func_18A1D0
    ctx->pc = 0x188B48u;
    SET_GPR_U32(ctx, 31, 0x188B50u);
    ctx->pc = 0x188B4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188B48u;
    // 0x188b4c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A1D0u, 0x188B48u, 0x188B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188B50u;
label_188b50:
    // 0x188b50: 0xc6a10000  lwc1        $f1, 0x0($s5)
    ctx->pc = 0x188b50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x188b54: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x188b54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x188b58: 0x12430013  beq         $s2, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x188B58u;
    {
        const bool branch_taken_0x188b58 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        ctx->pc = 0x188B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188B58u;
        // 0x188b5c: 0xe6a10010  swc1        $f1, 0x10($s5) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x188b58) {
            ctx->pc = 0x188BA8u;
            return;
        }
    }
    ctx->pc = 0x188B60u;
    // 0x188b60: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x188b60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x188b64: 0x12430005  beq         $s2, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x188B64u;
    {
        const bool branch_taken_0x188b64 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        if (branch_taken_0x188b64) {
            ctx->pc = 0x188B7Cu;
            return;
        }
    }
    ctx->pc = 0x188B6Cu;
    // 0x188b6c: 0x124000c9  beqz        $s2, . + 4 + (0xC9 << 2)
    ctx->pc = 0x188B6Cu;
    {
        const bool branch_taken_0x188b6c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x188b6c) {
            ctx->pc = 0x188E94u;
            return;
        }
    }
    ctx->pc = 0x188B74u;
    // 0x188b74: 0x100000c7  b           . + 4 + (0xC7 << 2)
    ctx->pc = 0x188B74u;
    {
        const bool branch_taken_0x188b74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x188b74) {
            ctx->pc = 0x188E94u;
            return;
        }
    }
    ctx->pc = 0x188B7Cu;
}
