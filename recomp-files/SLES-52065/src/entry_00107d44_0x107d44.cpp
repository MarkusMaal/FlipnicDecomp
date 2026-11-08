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

// Function: entry_00107d44
// Address: 0x107d44 - 0x107d90
void entry_00107d44_0x107d44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00107d44_0x107d44");
#endif

    switch (ctx->pc) {
        case 0x107d50u: goto label_107d50;
        default: break;
    }

    ctx->pc = 0x107d44u;

    // 0x107d44: 0x0  nop
    ctx->pc = 0x107d44u;
    // NOP
    // 0x107d48: 0xc062d50  jal         func_18B540
    ctx->pc = 0x107D48u;
    SET_GPR_U32(ctx, 31, 0x107D50u);
    ctx->pc = 0x18B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B540u, 0x107D48u, 0x107D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107D50u;
label_107d50:
    // 0x107d50: 0x3c0400ff  lui         $a0, 0xFF
    ctx->pc = 0x107d50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)255 << 16));
    // 0x107d54: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x107d54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x107d58: 0x2843824  and         $a3, $s4, $a0
    ctx->pc = 0x107d58u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 20) & GPR_U64(ctx, 4));
    // 0x107d5c: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x107d5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x107d60: 0x670018  mult        $zero, $v1, $a3
    ctx->pc = 0x107d60u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x107d64: 0x72fc2  srl         $a1, $a3, 31
    ctx->pc = 0x107d64u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 7), 31));
    // 0x107d68: 0x0  nop
    ctx->pc = 0x107d68u;
    // NOP
    // 0x107d6c: 0x2010  mfhi        $a0
    ctx->pc = 0x107d6cu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x107d70: 0x3283ff00  andi        $v1, $s4, 0xFF00
    ctx->pc = 0x107d70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)65280);
    // 0x107d74: 0x33203  sra         $a2, $v1, 8
    ctx->pc = 0x107d74u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 8));
    // 0x107d78: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x107d78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x107d7c: 0x423c3  sra         $a0, $a0, 15
    ctx->pc = 0x107d7cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 15));
    // 0x107d80: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x107D80u;
    {
        const bool branch_taken_0x107d80 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x107D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107D80u;
        // 0x107d84: 0x852821  addu        $a1, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107d80) {
            ctx->pc = 0x107D90u;
            return;
        }
    }
    ctx->pc = 0x107D88u;
    // 0x107d88: 0x246300ff  addiu       $v1, $v1, 0xFF
    ctx->pc = 0x107d88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 255));
    // 0x107d8c: 0x33203  sra         $a2, $v1, 8
    ctx->pc = 0x107d8cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 8));
    ctx->pc = 0x107d90u;
}
