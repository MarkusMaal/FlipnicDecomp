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

// Function: entry_00107dd0
// Address: 0x107dd0 - 0x107e3c
void entry_00107dd0_0x107dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00107dd0_0x107dd0");
#endif

    switch (ctx->pc) {
        case 0x107dfcu: goto label_107dfc;
        default: break;
    }

    ctx->pc = 0x107dd0u;

    // 0x107dd0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x107dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x107dd4: 0x1623001f  bne         $s1, $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x107DD4u;
    {
        const bool branch_taken_0x107dd4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        if (branch_taken_0x107dd4) {
            ctx->pc = 0x107E54u;
            return;
        }
    }
    ctx->pc = 0x107DDCu;
    // 0x107ddc: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x107ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x107de0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x107de0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x107de4: 0x1483001b  bne         $a0, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x107DE4u;
    {
        const bool branch_taken_0x107de4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x107DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107DE4u;
        // 0x107de8: 0x26740004  addiu       $s4, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107de4) {
            ctx->pc = 0x107E54u;
            return;
        }
    }
    ctx->pc = 0x107DECu;
    // 0x107dec: 0x12000019  beqz        $s0, . + 4 + (0x19 << 2)
    ctx->pc = 0x107DECu;
    {
        const bool branch_taken_0x107dec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x107dec) {
            ctx->pc = 0x107E54u;
            return;
        }
    }
    ctx->pc = 0x107DF4u;
    // 0x107df4: 0xc062d50  jal         func_18B540
    ctx->pc = 0x107DF4u;
    SET_GPR_U32(ctx, 31, 0x107DFCu);
    ctx->pc = 0x107DF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107DF4u;
    // 0x107df8: 0x8ef10000  lw          $s1, 0x0($s7) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B540u, 0x107DF4u, 0x107DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107DFCu;
label_107dfc:
    // 0x107dfc: 0x3c0400ff  lui         $a0, 0xFF
    ctx->pc = 0x107dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)255 << 16));
    // 0x107e00: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x107e00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x107e04: 0x2243824  and         $a3, $s1, $a0
    ctx->pc = 0x107e04u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 17) & GPR_U64(ctx, 4));
    // 0x107e08: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x107e08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x107e0c: 0x670018  mult        $zero, $v1, $a3
    ctx->pc = 0x107e0cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x107e10: 0x72fc2  srl         $a1, $a3, 31
    ctx->pc = 0x107e10u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 7), 31));
    // 0x107e14: 0x0  nop
    ctx->pc = 0x107e14u;
    // NOP
    // 0x107e18: 0x2010  mfhi        $a0
    ctx->pc = 0x107e18u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x107e1c: 0x3223ff00  andi        $v1, $s1, 0xFF00
    ctx->pc = 0x107e1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65280);
    // 0x107e20: 0x33203  sra         $a2, $v1, 8
    ctx->pc = 0x107e20u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 8));
    // 0x107e24: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x107e24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x107e28: 0x423c3  sra         $a0, $a0, 15
    ctx->pc = 0x107e28u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 15));
    // 0x107e2c: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x107E2Cu;
    {
        const bool branch_taken_0x107e2c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x107E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107E2Cu;
        // 0x107e30: 0x852821  addu        $a1, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107e2c) {
            ctx->pc = 0x107E3Cu;
            return;
        }
    }
    ctx->pc = 0x107E34u;
    // 0x107e34: 0x246300ff  addiu       $v1, $v1, 0xFF
    ctx->pc = 0x107e34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 255));
    // 0x107e38: 0x33203  sra         $a2, $v1, 8
    ctx->pc = 0x107e38u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 8));
    ctx->pc = 0x107e3cu;
}
