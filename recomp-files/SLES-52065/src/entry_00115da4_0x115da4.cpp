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

// Function: entry_00115da4
// Address: 0x115da4 - 0x115e04
void entry_00115da4_0x115da4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00115da4_0x115da4");
#endif

    switch (ctx->pc) {
        case 0x115dacu: goto label_115dac;
        case 0x115de8u: goto label_115de8;
        default: break;
    }

    ctx->pc = 0x115da4u;

    // 0x115da4: 0xc059748  jal         func_165D20
    ctx->pc = 0x115DA4u;
    SET_GPR_U32(ctx, 31, 0x115DACu);
    ctx->pc = 0x165D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165D20u, 0x115DA4u, 0x115DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115DACu;
label_115dac:
    // 0x115dac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x115dacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115db0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x115db0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x115db4: 0x16020019  bne         $s0, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x115DB4u;
    {
        const bool branch_taken_0x115db4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x115db4) {
            ctx->pc = 0x115E1Cu;
            return;
        }
    }
    ctx->pc = 0x115DBCu;
    // 0x115dbc: 0x92420255  lbu         $v0, 0x255($s2)
    ctx->pc = 0x115dbcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 597)));
    // 0x115dc0: 0x2177c  dsll32      $v0, $v0, 29
    ctx->pc = 0x115dc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 29));
    // 0x115dc4: 0x217fe  dsrl32      $v0, $v0, 31
    ctx->pc = 0x115dc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 31));
    // 0x115dc8: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x115DC8u;
    {
        const bool branch_taken_0x115dc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x115DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115DC8u;
        // 0x115dcc: 0x3c023ecc  lui         $v0, 0x3ECC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16076 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115dc8) {
            ctx->pc = 0x115E04u;
            return;
        }
    }
    ctx->pc = 0x115DD0u;
    // 0x115dd0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x115dd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115dd4: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x115dd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x115dd8: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x115dd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x115ddc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x115ddcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x115de0: 0xc059a68  jal         func_1669A0
    ctx->pc = 0x115DE0u;
    SET_GPR_U32(ctx, 31, 0x115DE8u);
    ctx->pc = 0x115DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115DE0u;
    // 0x115de4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1669A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1669A0u, 0x115DE0u, 0x115DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115DE8u;
label_115de8:
    // 0x115de8: 0x8e430224  lw          $v1, 0x224($s2)
    ctx->pc = 0x115de8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 548)));
    // 0x115dec: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x115decu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x115df0: 0x8f8283a8  lw          $v0, -0x7C58($gp)
    ctx->pc = 0x115df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935464)));
    // 0x115df4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x115df4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115df8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x115df8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x115dfc: 0xc0465f0  jal         func_1197C0
    ctx->pc = 0x115DFCu;
    SET_GPR_U32(ctx, 31, 0x115E04u);
    ctx->pc = 0x115E00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115DFCu;
    // 0x115e00: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1197C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1197C0u, 0x115DFCu, 0x115E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115E04u;
}
