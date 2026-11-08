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

// Function: entry_001a5ff8
// Address: 0x1a5ff8 - 0x1a6054
void entry_001a5ff8_0x1a5ff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a5ff8_0x1a5ff8");
#endif

    switch (ctx->pc) {
        case 0x1a6044u: goto label_1a6044;
        default: break;
    }

    ctx->pc = 0x1a5ff8u;

    // 0x1a5ff8: 0x8e8300ec  lw          $v1, 0xEC($s4)
    ctx->pc = 0x1a5ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 236)));
    // 0x1a5ffc: 0x8e8200f0  lw          $v0, 0xF0($s4)
    ctx->pc = 0x1a5ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 240)));
    // 0x1a6000: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1a6000u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1a6004: 0x0  nop
    ctx->pc = 0x1a6004u;
    // NOP
    // 0x1a6008: 0x0  nop
    ctx->pc = 0x1a6008u;
    // NOP
    // 0x1a600c: 0x1010  mfhi        $v0
    ctx->pc = 0x1a600cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1a6010: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1A6010u;
    {
        const bool branch_taken_0x1a6010 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a6010) {
            ctx->pc = 0x1A6054u;
            return;
        }
    }
    ctx->pc = 0x1A6018u;
    // 0x1a6018: 0x8e8300e8  lw          $v1, 0xE8($s4)
    ctx->pc = 0x1a6018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 232)));
    // 0x1a601c: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x1a601cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x1a6020: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1a6020u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1a6024: 0xae8300e8  sw          $v1, 0xE8($s4)
    ctx->pc = 0x1a6024u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 232), GPR_U32(ctx, 3));
    // 0x1a6028: 0xde8400c0  ld          $a0, 0xC0($s4)
    ctx->pc = 0x1a6028u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 20), 192)));
    // 0x1a602c: 0xde8300c8  ld          $v1, 0xC8($s4)
    ctx->pc = 0x1a602cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 20), 200)));
    // 0x1a6030: 0x83182d  daddu       $v1, $a0, $v1
    ctx->pc = 0x1a6030u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 3));
    // 0x1a6034: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A6034u;
    {
        const bool branch_taken_0x1a6034 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A6038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6034u;
        // 0x1a6038: 0xfe8300c0  sd          $v1, 0xC0($s4) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 20), 192), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6034) {
            ctx->pc = 0x1A6054u;
            return;
        }
    }
    ctx->pc = 0x1A603Cu;
    // 0x1a603c: 0xc062d50  jal         func_18B540
    ctx->pc = 0x1A603Cu;
    SET_GPR_U32(ctx, 31, 0x1A6044u);
    ctx->pc = 0x18B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B540u, 0x1A603Cu, 0x1A6044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6044u;
label_1a6044:
    // 0x1a6044: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a6044u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6048: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1a6048u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1a604c: 0xc062b5c  jal         func_18AD70
    ctx->pc = 0x1A604Cu;
    SET_GPR_U32(ctx, 31, 0x1A6054u);
    ctx->pc = 0x1A6050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A604Cu;
    // 0x1a6050: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AD70u, 0x1A604Cu, 0x1A6054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6054u;
}
