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

// Function: entry_00101d34
// Address: 0x101d34 - 0x101e00
void entry_00101d34_0x101d34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00101d34_0x101d34");
#endif

    switch (ctx->pc) {
        case 0x101d58u: goto label_101d58;
        case 0x101d80u: goto label_101d80;
        case 0x101da4u: goto label_101da4;
        case 0x101dc8u: goto label_101dc8;
        default: break;
    }

    ctx->pc = 0x101d34u;

    // 0x101d34: 0x8e420054  lw          $v0, 0x54($s2)
    ctx->pc = 0x101d34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x101d38: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x101d38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x101d3c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x101d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x101d40: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x101d40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x101d44: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x101d44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x101d48: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x101d48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x101d4c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x101d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x101d50: 0xc04cda8  jal         func_1336A0
    ctx->pc = 0x101D50u;
    SET_GPR_U32(ctx, 31, 0x101D58u);
    ctx->pc = 0x101D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101D50u;
    // 0x101d54: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1336A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1336A0u, 0x101D50u, 0x101D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101D58u;
label_101d58:
    // 0x101d58: 0x8e420054  lw          $v0, 0x54($s2)
    ctx->pc = 0x101d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x101d5c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x101d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x101d60: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x101d60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x101d64: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x101d64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x101d68: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x101d68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x101d6c: 0x24a5e000  addiu       $a1, $a1, -0x2000
    ctx->pc = 0x101d6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959104));
    // 0x101d70: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x101d70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x101d74: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x101d74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x101d78: 0xc04cb0c  jal         func_132C30
    ctx->pc = 0x101D78u;
    SET_GPR_U32(ctx, 31, 0x101D80u);
    ctx->pc = 0x101D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101D78u;
    // 0x101d7c: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132C30u, 0x101D78u, 0x101D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101D80u;
label_101d80:
    // 0x101d80: 0x8e420054  lw          $v0, 0x54($s2)
    ctx->pc = 0x101d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x101d84: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x101d84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x101d88: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x101d88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x101d8c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x101d8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x101d90: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x101d90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x101d94: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x101d94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x101d98: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x101d98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x101d9c: 0xc04cd30  jal         func_1334C0
    ctx->pc = 0x101D9Cu;
    SET_GPR_U32(ctx, 31, 0x101DA4u);
    ctx->pc = 0x101DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101D9Cu;
    // 0x101da0: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1334C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1334C0u, 0x101D9Cu, 0x101DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101DA4u;
label_101da4:
    // 0x101da4: 0x8e420054  lw          $v0, 0x54($s2)
    ctx->pc = 0x101da4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x101da8: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x101da8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x101dac: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x101dacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x101db0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x101db0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101db4: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x101db4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x101db8: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x101db8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x101dbc: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x101dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x101dc0: 0xc04ce04  jal         func_133810
    ctx->pc = 0x101DC0u;
    SET_GPR_U32(ctx, 31, 0x101DC8u);
    ctx->pc = 0x101DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101DC0u;
    // 0x101dc4: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x133810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133810u, 0x101DC0u, 0x101DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101DC8u;
label_101dc8:
    // 0x101dc8: 0x8e430054  lw          $v1, 0x54($s2)
    ctx->pc = 0x101dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x101dcc: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x101dccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x101dd0: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x101dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x101dd4: 0x3c080022  lui         $t0, 0x22
    ctx->pc = 0x101dd4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)34 << 16));
    // 0x101dd8: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x101dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x101ddc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x101ddcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101de0: 0x902821  addu        $a1, $a0, $s0
    ctx->pc = 0x101de0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x101de4: 0x2508f388  addiu       $t0, $t0, -0xC78
    ctx->pc = 0x101de4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294964104));
    // 0x101de8: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x101de8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x101dec: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x101decu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x101df0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x101df0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x101df4: 0x8c6d0010  lw          $t5, 0x10($v1)
    ctx->pc = 0x101df4u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x101df8: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x101DF8u;
    {
        const bool branch_taken_0x101df8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x101DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101DF8u;
        // 0x101dfc: 0x2484f3a0  addiu       $a0, $a0, -0xC60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101df8) {
            ctx->pc = 0x101E50u;
            return;
        }
    }
    ctx->pc = 0x101E00u;
}
