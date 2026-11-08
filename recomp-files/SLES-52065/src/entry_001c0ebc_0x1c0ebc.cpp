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

// Function: entry_001c0ebc
// Address: 0x1c0ebc - 0x1c0f80
void entry_001c0ebc_0x1c0ebc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c0ebc_0x1c0ebc");
#endif

    switch (ctx->pc) {
        case 0x1c0eccu: goto label_1c0ecc;
        case 0x1c0ee0u: goto label_1c0ee0;
        case 0x1c0ef4u: goto label_1c0ef4;
        case 0x1c0f08u: goto label_1c0f08;
        case 0x1c0f4cu: goto label_1c0f4c;
        case 0x1c0f5cu: goto label_1c0f5c;
        case 0x1c0f6cu: goto label_1c0f6c;
        default: break;
    }

    ctx->pc = 0x1c0ebcu;

    // 0x1c0ebc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1c0ebcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0ec0: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x1c0ec0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1c0ec4: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C0EC4u;
    SET_GPR_U32(ctx, 31, 0x1C0ECCu);
    ctx->pc = 0x1C0EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0EC4u;
    // 0x1c0ec8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C0EC4u, 0x1C0ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0ECCu;
label_1c0ecc:
    // 0x1c0ecc: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x1c0eccu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0ed0: 0x26260008  addiu       $a2, $s1, 0x8
    ctx->pc = 0x1c0ed0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x1c0ed4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1c0ed4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0ed8: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C0ED8u;
    SET_GPR_U32(ctx, 31, 0x1C0EE0u);
    ctx->pc = 0x1C0EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0ED8u;
    // 0x1c0edc: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C0ED8u, 0x1C0EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0EE0u;
label_1c0ee0:
    // 0x1c0ee0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1c0ee0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0ee4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1c0ee4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0ee8: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x1c0ee8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1c0eec: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C0EECu;
    SET_GPR_U32(ctx, 31, 0x1C0EF4u);
    ctx->pc = 0x1C0EF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0EECu;
    // 0x1c0ef0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C0EECu, 0x1C0EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0EF4u;
label_1c0ef4:
    // 0x1c0ef4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1c0ef4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0ef8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1c0ef8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0efc: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1c0efcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1c0f00: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C0F00u;
    SET_GPR_U32(ctx, 31, 0x1C0F08u);
    ctx->pc = 0x1C0F04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0F00u;
    // 0x1c0f04: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C0F00u, 0x1C0F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0F08u;
label_1c0f08:
    // 0x1c0f08: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1c0f08u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0f0c: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1c0f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1c0f10: 0x3c21021  addu        $v0, $fp, $v0
    ctx->pc = 0x1c0f10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
    // 0x1c0f14: 0x202082a  slt         $at, $s0, $v0
    ctx->pc = 0x1c0f14u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1c0f18: 0x10200052  beqz        $at, . + 4 + (0x52 << 2)
    ctx->pc = 0x1C0F18u;
    {
        const bool branch_taken_0x1c0f18 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0f18) {
            ctx->pc = 0x1C1064u;
            return;
        }
    }
    ctx->pc = 0x1C0F20u;
    // 0x1c0f20: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1c0f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1c0f24: 0x171980  sll         $v1, $s7, 6
    ctx->pc = 0x1c0f24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 23), 6));
    // 0x1c0f28: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1c0f28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c0f2c: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1c0f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1c0f30: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1c0f30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1c0f34: 0x84420884  lh          $v0, 0x884($v0)
    ctx->pc = 0x1c0f34u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2180)));
    // 0x1c0f38: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1C0F38u;
    {
        const bool branch_taken_0x1c0f38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0F38u;
        // 0x1c0f3c: 0x3c050021  lui         $a1, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0f38) {
            ctx->pc = 0x1C0F80u;
            return;
        }
    }
    ctx->pc = 0x1C0F40u;
    // 0x1c0f40: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1c0f40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0f44: 0xc06e454  jal         func_1B9150
    ctx->pc = 0x1C0F44u;
    SET_GPR_U32(ctx, 31, 0x1C0F4Cu);
    ctx->pc = 0x1C0F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0F44u;
    // 0x1c0f48: 0x24a53f00  addiu       $a1, $a1, 0x3F00 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9150u, 0x1C0F44u, 0x1C0F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0F4Cu;
label_1c0f4c:
    // 0x1c0f4c: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1c0f4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1c0f50: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c0f50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0f54: 0xc06e454  jal         func_1B9150
    ctx->pc = 0x1C0F54u;
    SET_GPR_U32(ctx, 31, 0x1C0F5Cu);
    ctx->pc = 0x1C0F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0F54u;
    // 0x1c0f58: 0x24a53f00  addiu       $a1, $a1, 0x3F00 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9150u, 0x1C0F54u, 0x1C0F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0F5Cu;
label_1c0f5c:
    // 0x1c0f5c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1c0f5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0f60: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x1c0f60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1c0f64: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C0F64u;
    SET_GPR_U32(ctx, 31, 0x1C0F6Cu);
    ctx->pc = 0x1C0F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0F64u;
    // 0x1c0f68: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C0F64u, 0x1C0F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0F6Cu;
label_1c0f6c:
    // 0x1c0f6c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c0f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c0f70: 0xa0430008  sb          $v1, 0x8($v0)
    ctx->pc = 0x1c0f70u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 3));
    // 0x1c0f74: 0x2b11021  addu        $v0, $s5, $s1
    ctx->pc = 0x1c0f74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
    // 0x1c0f78: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1C0F78u;
    {
        const bool branch_taken_0x1c0f78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0F78u;
        // 0x1c0f7c: 0xa043008c  sb          $v1, 0x8C($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 140), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0f78) {
            ctx->pc = 0x1C0FBCu;
            return;
        }
    }
    ctx->pc = 0x1C0F80u;
}
