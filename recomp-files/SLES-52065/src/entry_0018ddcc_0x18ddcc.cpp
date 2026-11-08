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

// Function: entry_0018ddcc
// Address: 0x18ddcc - 0x18ddfc
void entry_0018ddcc_0x18ddcc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018ddcc_0x18ddcc");
#endif

    switch (ctx->pc) {
        case 0x18ddf4u: goto label_18ddf4;
        default: break;
    }

    ctx->pc = 0x18ddccu;

    // 0x18ddcc: 0x1c60000b  bgtz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x18DDCCu;
    {
        const bool branch_taken_0x18ddcc = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x18DDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DDCCu;
        // 0x18ddd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ddcc) {
            ctx->pc = 0x18DDFCu;
            return;
        }
    }
    ctx->pc = 0x18DDD4u;
    // 0x18ddd4: 0x8e230484  lw          $v1, 0x484($s1)
    ctx->pc = 0x18ddd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1156)));
    // 0x18ddd8: 0x8e22271c  lw          $v0, 0x271C($s1)
    ctx->pc = 0x18ddd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10012)));
    // 0x18dddc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x18dddcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x18dde0: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x18DDE0u;
    {
        const bool branch_taken_0x18dde0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x18DDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DDE0u;
        // 0x18dde4: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18dde0) {
            ctx->pc = 0x18DE00u;
            return;
        }
    }
    ctx->pc = 0x18DDE8u;
    // 0x18dde8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18dde8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ddec: 0xc063e08  jal         func_18F820
    ctx->pc = 0x18DDECu;
    SET_GPR_U32(ctx, 31, 0x18DDF4u);
    ctx->pc = 0x18DDF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DDECu;
    // 0x18ddf0: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x18DDECu, 0x18DDF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DDF4u;
label_18ddf4:
    // 0x18ddf4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x18DDF4u;
    {
        const bool branch_taken_0x18ddf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18DDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DDF4u;
        // 0x18ddf8: 0xc6210504  lwc1        $f1, 0x504($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ddf4) {
            ctx->pc = 0x18DE1Cu;
            return;
        }
    }
    ctx->pc = 0x18DDFCu;
}
