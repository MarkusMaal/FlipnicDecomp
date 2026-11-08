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

// Function: entry_00133d78
// Address: 0x133d78 - 0x133e14
void entry_00133d78_0x133d78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00133d78_0x133d78");
#endif

    switch (ctx->pc) {
        case 0x133d84u: goto label_133d84;
        case 0x133d94u: goto label_133d94;
        case 0x133da4u: goto label_133da4;
        case 0x133db4u: goto label_133db4;
        case 0x133decu: goto label_133dec;
        case 0x133e0cu: goto label_133e0c;
        default: break;
    }

    ctx->pc = 0x133d78u;

    // 0x133d78: 0x8e850050  lw          $a1, 0x50($s4)
    ctx->pc = 0x133d78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 80)));
    // 0x133d7c: 0xc080702  jal         func_201C08
    ctx->pc = 0x133D7Cu;
    SET_GPR_U32(ctx, 31, 0x133D84u);
    ctx->pc = 0x133D80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133D7Cu;
    // 0x133d80: 0x27a402b0  addiu       $a0, $sp, 0x2B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x133D7Cu, 0x133D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133D84u;
label_133d84:
    // 0x133d84: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x133d84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x133d88: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x133d88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x133d8c: 0xc0806b0  jal         func_201AC0
    ctx->pc = 0x133D8Cu;
    SET_GPR_U32(ctx, 31, 0x133D94u);
    ctx->pc = 0x133D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133D8Cu;
    // 0x133d90: 0x24a5ee60  addiu       $a1, $a1, -0x11A0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201AC0u, 0x133D8Cu, 0x133D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133D94u;
label_133d94:
    // 0x133d94: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x133D94u;
    {
        const bool branch_taken_0x133d94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x133d94) {
            ctx->pc = 0x133E14u;
            return;
        }
    }
    ctx->pc = 0x133D9Cu;
    // 0x133d9c: 0xc053098  jal         func_14C260
    ctx->pc = 0x133D9Cu;
    SET_GPR_U32(ctx, 31, 0x133DA4u);
    ctx->pc = 0x14C260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14C260u, 0x133D9Cu, 0x133DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133DA4u;
label_133da4:
    // 0x133da4: 0xafa202fc  sw          $v0, 0x2FC($sp)
    ctx->pc = 0x133da4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 764), GPR_U32(ctx, 2));
    // 0x133da8: 0x8fa502fc  lw          $a1, 0x2FC($sp)
    ctx->pc = 0x133da8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 764)));
    // 0x133dac: 0xc04c558  jal         func_131560
    ctx->pc = 0x133DACu;
    SET_GPR_U32(ctx, 31, 0x133DB4u);
    ctx->pc = 0x133DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133DACu;
    // 0x133db0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131560u, 0x133DACu, 0x133DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133DB4u;
label_133db4:
    // 0x133db4: 0x8e840050  lw          $a0, 0x50($s4)
    ctx->pc = 0x133db4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 80)));
    // 0x133db8: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x133db8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x133dbc: 0x8fa302fc  lw          $v1, 0x2FC($sp)
    ctx->pc = 0x133dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 764)));
    // 0x133dc0: 0x2442ee50  addiu       $v0, $v0, -0x11B0
    ctx->pc = 0x133dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962768));
    // 0x133dc4: 0xac640050  sw          $a0, 0x50($v1)
    ctx->pc = 0x133dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 80), GPR_U32(ctx, 4));
    // 0x133dc8: 0xae820050  sw          $v0, 0x50($s4)
    ctx->pc = 0x133dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 80), GPR_U32(ctx, 2));
    // 0x133dcc: 0x8e830084  lw          $v1, 0x84($s4)
    ctx->pc = 0x133dccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 132)));
    // 0x133dd0: 0x8c6200e4  lw          $v0, 0xE4($v1)
    ctx->pc = 0x133dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 228)));
    // 0x133dd4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x133dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x133dd8: 0xac6200e4  sw          $v0, 0xE4($v1)
    ctx->pc = 0x133dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 228), GPR_U32(ctx, 2));
    // 0x133ddc: 0x8e820084  lw          $v0, 0x84($s4)
    ctx->pc = 0x133ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 132)));
    // 0x133de0: 0x245500e8  addiu       $s5, $v0, 0xE8
    ctx->pc = 0x133de0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 232));
    // 0x133de4: 0xc049ed0  jal         func_127B40
    ctx->pc = 0x133DE4u;
    SET_GPR_U32(ctx, 31, 0x133DECu);
    ctx->pc = 0x133DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133DE4u;
    // 0x133de8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127B40u, 0x133DE4u, 0x133DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133DECu;
label_133dec:
    // 0x133dec: 0x8ea30004  lw          $v1, 0x4($s5)
    ctx->pc = 0x133decu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x133df0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x133df0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133df4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x133df4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x133df8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x133df8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x133dfc: 0x27a702fc  addiu       $a3, $sp, 0x2FC
    ctx->pc = 0x133dfcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 764));
    // 0x133e00: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x133e00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x133e04: 0xc0484ec  jal         func_1213B0
    ctx->pc = 0x133E04u;
    SET_GPR_U32(ctx, 31, 0x133E0Cu);
    ctx->pc = 0x133E08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133E04u;
    // 0x133e08: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1213B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1213B0u, 0x133E04u, 0x133E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133E0Cu;
label_133e0c:
    // 0x133e0c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x133e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x133e10: 0xae820080  sw          $v0, 0x80($s4)
    ctx->pc = 0x133e10u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 128), GPR_U32(ctx, 2));
    ctx->pc = 0x133e14u;
}
