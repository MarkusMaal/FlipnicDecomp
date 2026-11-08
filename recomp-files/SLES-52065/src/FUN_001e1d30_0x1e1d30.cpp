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

// Function: FUN_001e1d30
// Address: 0x1e1d30 - 0x1e1fac
void FUN_001e1d30_0x1e1d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001e1d30_0x1e1d30");
#endif

    switch (ctx->pc) {
        case 0x1e1d30u: goto label_1e1d30;
        case 0x1e1d34u: goto label_1e1d34;
        case 0x1e1d38u: goto label_1e1d38;
        case 0x1e1d3cu: goto label_1e1d3c;
        case 0x1e1d40u: goto label_1e1d40;
        case 0x1e1d44u: goto label_1e1d44;
        case 0x1e1d48u: goto label_1e1d48;
        case 0x1e1d4cu: goto label_1e1d4c;
        case 0x1e1d50u: goto label_1e1d50;
        case 0x1e1d54u: goto label_1e1d54;
        case 0x1e1d58u: goto label_1e1d58;
        case 0x1e1d5cu: goto label_1e1d5c;
        case 0x1e1d60u: goto label_1e1d60;
        case 0x1e1d64u: goto label_1e1d64;
        case 0x1e1d68u: goto label_1e1d68;
        case 0x1e1d6cu: goto label_1e1d6c;
        case 0x1e1d70u: goto label_1e1d70;
        case 0x1e1d74u: goto label_1e1d74;
        case 0x1e1d78u: goto label_1e1d78;
        case 0x1e1d7cu: goto label_1e1d7c;
        case 0x1e1d80u: goto label_1e1d80;
        case 0x1e1d84u: goto label_1e1d84;
        case 0x1e1d88u: goto label_1e1d88;
        case 0x1e1d8cu: goto label_1e1d8c;
        case 0x1e1d90u: goto label_1e1d90;
        case 0x1e1d94u: goto label_1e1d94;
        case 0x1e1d98u: goto label_1e1d98;
        case 0x1e1d9cu: goto label_1e1d9c;
        case 0x1e1da0u: goto label_1e1da0;
        case 0x1e1da4u: goto label_1e1da4;
        case 0x1e1da8u: goto label_1e1da8;
        case 0x1e1dacu: goto label_1e1dac;
        case 0x1e1db0u: goto label_1e1db0;
        case 0x1e1db4u: goto label_1e1db4;
        case 0x1e1db8u: goto label_1e1db8;
        case 0x1e1dbcu: goto label_1e1dbc;
        case 0x1e1dc0u: goto label_1e1dc0;
        case 0x1e1dc4u: goto label_1e1dc4;
        case 0x1e1dc8u: goto label_1e1dc8;
        case 0x1e1dccu: goto label_1e1dcc;
        case 0x1e1dd0u: goto label_1e1dd0;
        case 0x1e1dd4u: goto label_1e1dd4;
        case 0x1e1dd8u: goto label_1e1dd8;
        case 0x1e1ddcu: goto label_1e1ddc;
        case 0x1e1de0u: goto label_1e1de0;
        case 0x1e1de4u: goto label_1e1de4;
        case 0x1e1de8u: goto label_1e1de8;
        case 0x1e1decu: goto label_1e1dec;
        case 0x1e1df0u: goto label_1e1df0;
        case 0x1e1df4u: goto label_1e1df4;
        case 0x1e1df8u: goto label_1e1df8;
        case 0x1e1dfcu: goto label_1e1dfc;
        case 0x1e1e00u: goto label_1e1e00;
        case 0x1e1e04u: goto label_1e1e04;
        case 0x1e1e08u: goto label_1e1e08;
        case 0x1e1e0cu: goto label_1e1e0c;
        case 0x1e1e10u: goto label_1e1e10;
        case 0x1e1e14u: goto label_1e1e14;
        case 0x1e1e18u: goto label_1e1e18;
        case 0x1e1e1cu: goto label_1e1e1c;
        case 0x1e1e20u: goto label_1e1e20;
        case 0x1e1e24u: goto label_1e1e24;
        case 0x1e1e28u: goto label_1e1e28;
        case 0x1e1e2cu: goto label_1e1e2c;
        case 0x1e1e30u: goto label_1e1e30;
        case 0x1e1e34u: goto label_1e1e34;
        case 0x1e1e38u: goto label_1e1e38;
        case 0x1e1e3cu: goto label_1e1e3c;
        case 0x1e1e40u: goto label_1e1e40;
        case 0x1e1e44u: goto label_1e1e44;
        case 0x1e1e48u: goto label_1e1e48;
        case 0x1e1e4cu: goto label_1e1e4c;
        case 0x1e1e50u: goto label_1e1e50;
        case 0x1e1e54u: goto label_1e1e54;
        case 0x1e1e58u: goto label_1e1e58;
        case 0x1e1e5cu: goto label_1e1e5c;
        case 0x1e1e60u: goto label_1e1e60;
        case 0x1e1e64u: goto label_1e1e64;
        case 0x1e1e68u: goto label_1e1e68;
        case 0x1e1e6cu: goto label_1e1e6c;
        case 0x1e1e70u: goto label_1e1e70;
        case 0x1e1e74u: goto label_1e1e74;
        case 0x1e1e78u: goto label_1e1e78;
        case 0x1e1e7cu: goto label_1e1e7c;
        case 0x1e1e80u: goto label_1e1e80;
        case 0x1e1e84u: goto label_1e1e84;
        case 0x1e1e88u: goto label_1e1e88;
        case 0x1e1e8cu: goto label_1e1e8c;
        case 0x1e1e90u: goto label_1e1e90;
        case 0x1e1e94u: goto label_1e1e94;
        case 0x1e1e98u: goto label_1e1e98;
        case 0x1e1e9cu: goto label_1e1e9c;
        case 0x1e1ea0u: goto label_1e1ea0;
        case 0x1e1ea4u: goto label_1e1ea4;
        case 0x1e1ea8u: goto label_1e1ea8;
        case 0x1e1eacu: goto label_1e1eac;
        case 0x1e1eb0u: goto label_1e1eb0;
        case 0x1e1eb4u: goto label_1e1eb4;
        case 0x1e1eb8u: goto label_1e1eb8;
        case 0x1e1ebcu: goto label_1e1ebc;
        case 0x1e1ec0u: goto label_1e1ec0;
        case 0x1e1ec4u: goto label_1e1ec4;
        case 0x1e1ec8u: goto label_1e1ec8;
        case 0x1e1eccu: goto label_1e1ecc;
        case 0x1e1ed0u: goto label_1e1ed0;
        case 0x1e1ed4u: goto label_1e1ed4;
        case 0x1e1ed8u: goto label_1e1ed8;
        case 0x1e1edcu: goto label_1e1edc;
        case 0x1e1ee0u: goto label_1e1ee0;
        case 0x1e1ee4u: goto label_1e1ee4;
        case 0x1e1ee8u: goto label_1e1ee8;
        case 0x1e1eecu: goto label_1e1eec;
        case 0x1e1ef0u: goto label_1e1ef0;
        case 0x1e1ef4u: goto label_1e1ef4;
        case 0x1e1ef8u: goto label_1e1ef8;
        case 0x1e1efcu: goto label_1e1efc;
        case 0x1e1f00u: goto label_1e1f00;
        case 0x1e1f04u: goto label_1e1f04;
        case 0x1e1f08u: goto label_1e1f08;
        case 0x1e1f0cu: goto label_1e1f0c;
        case 0x1e1f10u: goto label_1e1f10;
        case 0x1e1f14u: goto label_1e1f14;
        case 0x1e1f18u: goto label_1e1f18;
        case 0x1e1f1cu: goto label_1e1f1c;
        case 0x1e1f20u: goto label_1e1f20;
        case 0x1e1f24u: goto label_1e1f24;
        case 0x1e1f28u: goto label_1e1f28;
        case 0x1e1f2cu: goto label_1e1f2c;
        case 0x1e1f30u: goto label_1e1f30;
        case 0x1e1f34u: goto label_1e1f34;
        case 0x1e1f38u: goto label_1e1f38;
        case 0x1e1f3cu: goto label_1e1f3c;
        case 0x1e1f40u: goto label_1e1f40;
        case 0x1e1f44u: goto label_1e1f44;
        case 0x1e1f48u: goto label_1e1f48;
        case 0x1e1f4cu: goto label_1e1f4c;
        case 0x1e1f50u: goto label_1e1f50;
        case 0x1e1f54u: goto label_1e1f54;
        case 0x1e1f58u: goto label_1e1f58;
        case 0x1e1f5cu: goto label_1e1f5c;
        case 0x1e1f60u: goto label_1e1f60;
        case 0x1e1f64u: goto label_1e1f64;
        case 0x1e1f68u: goto label_1e1f68;
        case 0x1e1f6cu: goto label_1e1f6c;
        case 0x1e1f70u: goto label_1e1f70;
        case 0x1e1f74u: goto label_1e1f74;
        case 0x1e1f78u: goto label_1e1f78;
        case 0x1e1f7cu: goto label_1e1f7c;
        case 0x1e1f80u: goto label_1e1f80;
        case 0x1e1f84u: goto label_1e1f84;
        case 0x1e1f88u: goto label_1e1f88;
        case 0x1e1f8cu: goto label_1e1f8c;
        case 0x1e1f90u: goto label_1e1f90;
        case 0x1e1f94u: goto label_1e1f94;
        case 0x1e1f98u: goto label_1e1f98;
        case 0x1e1f9cu: goto label_1e1f9c;
        case 0x1e1fa0u: goto label_1e1fa0;
        case 0x1e1fa4u: goto label_1e1fa4;
        case 0x1e1fa8u: goto label_1e1fa8;
        default: break;
    }

    ctx->pc = 0x1e1d30u;

label_1e1d30:
    // 0x1e1d30: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1e1d30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_1e1d34:
    // 0x1e1d34: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e1d34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1e1d38:
    // 0x1e1d38: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x1e1d38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
label_1e1d3c:
    // 0x1e1d3c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e1d3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e1d40:
    // 0x1e1d40: 0x3a0f021  addu        $fp, $sp, $zero
    ctx->pc = 0x1e1d40u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 0)));
label_1e1d44:
    // 0x1e1d44: 0x83828738  lb          $v0, -0x78C8($gp)
    ctx->pc = 0x1e1d44u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936376)));
label_1e1d48:
    // 0x1e1d48: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
label_1e1d4c:
    if (ctx->pc == 0x1E1D4Cu) {
        ctx->pc = 0x1E1D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1D48u;
        // 0x1e1d4c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1D50u;
        goto label_1e1d50;
    }
    ctx->pc = 0x1E1D48u;
    {
        const bool branch_taken_0x1e1d48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E1D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1D48u;
        // 0x1e1d4c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1d48) {
            ctx->pc = 0x1E1D88u;
            goto label_1e1d88;
        }
    }
    ctx->pc = 0x1E1D50u;
label_1e1d50:
    // 0x1e1d50: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1e1d50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
label_1e1d54:
    // 0x1e1d54: 0x3c040039  lui         $a0, 0x39
    ctx->pc = 0x1e1d54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
label_1e1d58:
    // 0x1e1d58: 0x8c22d9ac  lw          $v0, -0x2654($at)
    ctx->pc = 0x1e1d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957484)));
label_1e1d5c:
    // 0x1e1d5c: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x1e1d5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1e1d60:
    // 0x1e1d60: 0xc0794c4  jal         func_1E5310
label_1e1d64:
    if (ctx->pc == 0x1E1D64u) {
        ctx->pc = 0x1E1D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1D60u;
        // 0x1e1d64: 0x2484b8f0  addiu       $a0, $a0, -0x4710 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949104));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1D68u;
        goto label_1e1d68;
    }
    ctx->pc = 0x1E1D60u;
    SET_GPR_U32(ctx, 31, 0x1E1D68u);
    ctx->pc = 0x1E1D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1D60u;
    // 0x1e1d64: 0x2484b8f0  addiu       $a0, $a0, -0x4710 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E5310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E5310u, 0x1E1D60u, 0x1E1D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1D68u;
label_1e1d68:
    // 0x1e1d68: 0x3c05001e  lui         $a1, 0x1E
    ctx->pc = 0x1e1d68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)30 << 16));
label_1e1d6c:
    // 0x1e1d6c: 0x3c060039  lui         $a2, 0x39
    ctx->pc = 0x1e1d6cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)57 << 16));
label_1e1d70:
    // 0x1e1d70: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e1d70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e1d74:
    // 0x1e1d74: 0x24a51fb0  addiu       $a1, $a1, 0x1FB0
    ctx->pc = 0x1e1d74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8112));
label_1e1d78:
    // 0x1e1d78: 0xc07a540  jal         func_1E9500
label_1e1d7c:
    if (ctx->pc == 0x1E1D7Cu) {
        ctx->pc = 0x1E1D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1D78u;
        // 0x1e1d7c: 0x24c6b8d8  addiu       $a2, $a2, -0x4728 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949080));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1D80u;
        goto label_1e1d80;
    }
    ctx->pc = 0x1E1D78u;
    SET_GPR_U32(ctx, 31, 0x1E1D80u);
    ctx->pc = 0x1E1D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1D78u;
    // 0x1e1d7c: 0x24c6b8d8  addiu       $a2, $a2, -0x4728 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949080));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9500u, 0x1E1D78u, 0x1E1D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1D80u;
label_1e1d80:
    // 0x1e1d80: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e1d80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e1d84:
    // 0x1e1d84: 0xa3828738  sb          $v0, -0x78C8($gp)
    ctx->pc = 0x1e1d84u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936376), (uint8_t)GPR_U32(ctx, 2));
label_1e1d88:
    // 0x1e1d88: 0x8382873c  lb          $v0, -0x78C4($gp)
    ctx->pc = 0x1e1d88u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936380)));
label_1e1d8c:
    // 0x1e1d8c: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_1e1d90:
    if (ctx->pc == 0x1E1D90u) {
        ctx->pc = 0x1E1D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1D8Cu;
        // 0x1e1d90: 0x3c010022  lui         $at, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1D94u;
        goto label_1e1d94;
    }
    ctx->pc = 0x1E1D8Cu;
    {
        const bool branch_taken_0x1e1d8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E1D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1D8Cu;
        // 0x1e1d90: 0x3c010022  lui         $at, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1d8c) {
            ctx->pc = 0x1E1DC8u;
            goto label_1e1dc8;
        }
    }
    ctx->pc = 0x1E1D94u;
label_1e1d94:
    // 0x1e1d94: 0x3c040039  lui         $a0, 0x39
    ctx->pc = 0x1e1d94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
label_1e1d98:
    // 0x1e1d98: 0x8c22d9ac  lw          $v0, -0x2654($at)
    ctx->pc = 0x1e1d98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957484)));
label_1e1d9c:
    // 0x1e1d9c: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x1e1d9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1e1da0:
    // 0x1e1da0: 0xc0794c4  jal         func_1E5310
label_1e1da4:
    if (ctx->pc == 0x1E1DA4u) {
        ctx->pc = 0x1E1DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1DA0u;
        // 0x1e1da4: 0x2484b960  addiu       $a0, $a0, -0x46A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949216));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1DA8u;
        goto label_1e1da8;
    }
    ctx->pc = 0x1E1DA0u;
    SET_GPR_U32(ctx, 31, 0x1E1DA8u);
    ctx->pc = 0x1E1DA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1DA0u;
    // 0x1e1da4: 0x2484b960  addiu       $a0, $a0, -0x46A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E5310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E5310u, 0x1E1DA0u, 0x1E1DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1DA8u;
label_1e1da8:
    // 0x1e1da8: 0x3c05001e  lui         $a1, 0x1E
    ctx->pc = 0x1e1da8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)30 << 16));
label_1e1dac:
    // 0x1e1dac: 0x3c060039  lui         $a2, 0x39
    ctx->pc = 0x1e1dacu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)57 << 16));
label_1e1db0:
    // 0x1e1db0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e1db0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e1db4:
    // 0x1e1db4: 0x24a51fb0  addiu       $a1, $a1, 0x1FB0
    ctx->pc = 0x1e1db4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8112));
label_1e1db8:
    // 0x1e1db8: 0xc07a540  jal         func_1E9500
label_1e1dbc:
    if (ctx->pc == 0x1E1DBCu) {
        ctx->pc = 0x1E1DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1DB8u;
        // 0x1e1dbc: 0x24c6b948  addiu       $a2, $a2, -0x46B8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1DC0u;
        goto label_1e1dc0;
    }
    ctx->pc = 0x1E1DB8u;
    SET_GPR_U32(ctx, 31, 0x1E1DC0u);
    ctx->pc = 0x1E1DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1DB8u;
    // 0x1e1dbc: 0x24c6b948  addiu       $a2, $a2, -0x46B8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9500u, 0x1E1DB8u, 0x1E1DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1DC0u;
label_1e1dc0:
    // 0x1e1dc0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e1dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e1dc4:
    // 0x1e1dc4: 0xa382873c  sb          $v0, -0x78C4($gp)
    ctx->pc = 0x1e1dc4u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936380), (uint8_t)GPR_U32(ctx, 2));
label_1e1dc8:
    // 0x1e1dc8: 0x83828740  lb          $v0, -0x78C0($gp)
    ctx->pc = 0x1e1dc8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936384)));
label_1e1dcc:
    // 0x1e1dcc: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_1e1dd0:
    if (ctx->pc == 0x1E1DD0u) {
        ctx->pc = 0x1E1DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1DCCu;
        // 0x1e1dd0: 0x3c010022  lui         $at, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1DD4u;
        goto label_1e1dd4;
    }
    ctx->pc = 0x1E1DCCu;
    {
        const bool branch_taken_0x1e1dcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E1DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1DCCu;
        // 0x1e1dd0: 0x3c010022  lui         $at, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1dcc) {
            ctx->pc = 0x1E1E08u;
            goto label_1e1e08;
        }
    }
    ctx->pc = 0x1E1DD4u;
label_1e1dd4:
    // 0x1e1dd4: 0x3c040039  lui         $a0, 0x39
    ctx->pc = 0x1e1dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
label_1e1dd8:
    // 0x1e1dd8: 0x8c22d9ac  lw          $v0, -0x2654($at)
    ctx->pc = 0x1e1dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957484)));
label_1e1ddc:
    // 0x1e1ddc: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x1e1ddcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1e1de0:
    // 0x1e1de0: 0xc0794c4  jal         func_1E5310
label_1e1de4:
    if (ctx->pc == 0x1E1DE4u) {
        ctx->pc = 0x1E1DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1DE0u;
        // 0x1e1de4: 0x2484b9d0  addiu       $a0, $a0, -0x4630 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949328));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1DE8u;
        goto label_1e1de8;
    }
    ctx->pc = 0x1E1DE0u;
    SET_GPR_U32(ctx, 31, 0x1E1DE8u);
    ctx->pc = 0x1E1DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1DE0u;
    // 0x1e1de4: 0x2484b9d0  addiu       $a0, $a0, -0x4630 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949328));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E5310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E5310u, 0x1E1DE0u, 0x1E1DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1DE8u;
label_1e1de8:
    // 0x1e1de8: 0x3c05001e  lui         $a1, 0x1E
    ctx->pc = 0x1e1de8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)30 << 16));
label_1e1dec:
    // 0x1e1dec: 0x3c060039  lui         $a2, 0x39
    ctx->pc = 0x1e1decu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)57 << 16));
label_1e1df0:
    // 0x1e1df0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e1df0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e1df4:
    // 0x1e1df4: 0x24a51fb0  addiu       $a1, $a1, 0x1FB0
    ctx->pc = 0x1e1df4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8112));
label_1e1df8:
    // 0x1e1df8: 0xc07a540  jal         func_1E9500
label_1e1dfc:
    if (ctx->pc == 0x1E1DFCu) {
        ctx->pc = 0x1E1DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1DF8u;
        // 0x1e1dfc: 0x24c6b9b8  addiu       $a2, $a2, -0x4648 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949304));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1E00u;
        goto label_1e1e00;
    }
    ctx->pc = 0x1E1DF8u;
    SET_GPR_U32(ctx, 31, 0x1E1E00u);
    ctx->pc = 0x1E1DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1DF8u;
    // 0x1e1dfc: 0x24c6b9b8  addiu       $a2, $a2, -0x4648 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9500u, 0x1E1DF8u, 0x1E1E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1E00u;
label_1e1e00:
    // 0x1e1e00: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e1e00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e1e04:
    // 0x1e1e04: 0xa3828740  sb          $v0, -0x78C0($gp)
    ctx->pc = 0x1e1e04u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936384), (uint8_t)GPR_U32(ctx, 2));
label_1e1e08:
    // 0x1e1e08: 0x8f838728  lw          $v1, -0x78D8($gp)
    ctx->pc = 0x1e1e08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936360)));
label_1e1e0c:
    // 0x1e1e0c: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1e1e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1e1e10:
    // 0x1e1e10: 0x1460005f  bnez        $v1, . + 4 + (0x5F << 2)
label_1e1e14:
    if (ctx->pc == 0x1E1E14u) {
        ctx->pc = 0x1E1E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1E10u;
        // 0x1e1e14: 0xaf828728  sw          $v0, -0x78D8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936360), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1E18u;
        goto label_1e1e18;
    }
    ctx->pc = 0x1E1E10u;
    {
        const bool branch_taken_0x1e1e10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E1E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1E10u;
        // 0x1e1e14: 0xaf828728  sw          $v0, -0x78D8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936360), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1e10) {
            ctx->pc = 0x1E1F90u;
            goto label_1e1f90;
        }
    }
    ctx->pc = 0x1E1E18u;
label_1e1e18:
    // 0x1e1e18: 0x3c040039  lui         $a0, 0x39
    ctx->pc = 0x1e1e18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
label_1e1e1c:
    // 0x1e1e1c: 0x2484b630  addiu       $a0, $a0, -0x49D0
    ctx->pc = 0x1e1e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948400));
label_1e1e20:
    // 0x1e1e20: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
label_1e1e24:
    if (ctx->pc == 0x1E1E24u) {
        ctx->pc = 0x1E1E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1E20u;
        // 0x1e1e24: 0x3c060039  lui         $a2, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)57 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1E28u;
        goto label_1e1e28;
    }
    ctx->pc = 0x1E1E20u;
    {
        const bool branch_taken_0x1e1e20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1E20u;
        // 0x1e1e24: 0x3c060039  lui         $a2, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)57 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1e20) {
            ctx->pc = 0x1E1E50u;
            goto label_1e1e50;
        }
    }
    ctx->pc = 0x1E1E28u;
label_1e1e28:
    // 0x1e1e28: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1e1e28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e1e2c:
    // 0x1e1e2c: 0x24c6b8f0  addiu       $a2, $a2, -0x4710
    ctx->pc = 0x1e1e2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949104));
label_1e1e30:
    // 0x1e1e30: 0xc078b58  jal         func_1E2D60
label_1e1e34:
    if (ctx->pc == 0x1E1E34u) {
        ctx->pc = 0x1E1E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1E30u;
        // 0x1e1e34: 0xafdd0044  sw          $sp, 0x44($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 68), GPR_U32(ctx, 29));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1E38u;
        goto label_1e1e38;
    }
    ctx->pc = 0x1E1E30u;
    SET_GPR_U32(ctx, 31, 0x1E1E38u);
    ctx->pc = 0x1E1E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1E30u;
    // 0x1e1e34: 0xafdd0044  sw          $sp, 0x44($fp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 30), 68), GPR_U32(ctx, 29));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2D60u, 0x1E1E30u, 0x1E1E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1E38u;
label_1e1e38:
    // 0x1e1e38: 0x10000005  b           . + 4 + (0x5 << 2)
label_1e1e3c:
    if (ctx->pc == 0x1E1E3Cu) {
        ctx->pc = 0x1E1E40u;
        goto label_1e1e40;
    }
    ctx->pc = 0x1E1E38u;
    {
        const bool branch_taken_0x1e1e38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e1e38) {
            ctx->pc = 0x1E1E50u;
            goto label_1e1e50;
        }
    }
    ctx->pc = 0x1E1E40u;
label_1e1e40:
    // 0x1e1e40: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1e1e40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e1e44:
    // 0x1e1e44: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e1e44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e1e48:
    // 0x1e1e48: 0xc07ab64  jal         func_1EAD90
label_1e1e4c:
    if (ctx->pc == 0x1E1E4Cu) {
        ctx->pc = 0x1E1E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1E48u;
        // 0x1e1e4c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1E50u;
        goto label_1e1e50;
    }
    ctx->pc = 0x1E1E48u;
    SET_GPR_U32(ctx, 31, 0x1E1E50u);
    ctx->pc = 0x1E1E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1E48u;
    // 0x1e1e4c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAD90u, 0x1E1E48u, 0x1E1E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1E50u;
label_1e1e50:
    // 0x1e1e50: 0x3c040039  lui         $a0, 0x39
    ctx->pc = 0x1e1e50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
label_1e1e54:
    // 0x1e1e54: 0x2484b6a0  addiu       $a0, $a0, -0x4960
    ctx->pc = 0x1e1e54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948512));
label_1e1e58:
    // 0x1e1e58: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
label_1e1e5c:
    if (ctx->pc == 0x1E1E5Cu) {
        ctx->pc = 0x1E1E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1E58u;
        // 0x1e1e5c: 0x3c060039  lui         $a2, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)57 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1E60u;
        goto label_1e1e60;
    }
    ctx->pc = 0x1E1E58u;
    {
        const bool branch_taken_0x1e1e58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1E58u;
        // 0x1e1e5c: 0x3c060039  lui         $a2, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)57 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1e58) {
            ctx->pc = 0x1E1E88u;
            goto label_1e1e88;
        }
    }
    ctx->pc = 0x1E1E60u;
label_1e1e60:
    // 0x1e1e60: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1e1e60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e1e64:
    // 0x1e1e64: 0x24c6b960  addiu       $a2, $a2, -0x46A0
    ctx->pc = 0x1e1e64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949216));
label_1e1e68:
    // 0x1e1e68: 0xc078c74  jal         func_1E31D0
label_1e1e6c:
    if (ctx->pc == 0x1E1E6Cu) {
        ctx->pc = 0x1E1E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1E68u;
        // 0x1e1e6c: 0xafdd0064  sw          $sp, 0x64($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 100), GPR_U32(ctx, 29));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1E70u;
        goto label_1e1e70;
    }
    ctx->pc = 0x1E1E68u;
    SET_GPR_U32(ctx, 31, 0x1E1E70u);
    ctx->pc = 0x1E1E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1E68u;
    // 0x1e1e6c: 0xafdd0064  sw          $sp, 0x64($fp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 30), 100), GPR_U32(ctx, 29));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E31D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E31D0u, 0x1E1E68u, 0x1E1E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1E70u;
label_1e1e70:
    // 0x1e1e70: 0x10000005  b           . + 4 + (0x5 << 2)
label_1e1e74:
    if (ctx->pc == 0x1E1E74u) {
        ctx->pc = 0x1E1E78u;
        goto label_1e1e78;
    }
    ctx->pc = 0x1E1E70u;
    {
        const bool branch_taken_0x1e1e70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e1e70) {
            ctx->pc = 0x1E1E88u;
            goto label_1e1e88;
        }
    }
    ctx->pc = 0x1E1E78u;
label_1e1e78:
    // 0x1e1e78: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1e1e78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e1e7c:
    // 0x1e1e7c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e1e7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e1e80:
    // 0x1e1e80: 0xc07ab64  jal         func_1EAD90
label_1e1e84:
    if (ctx->pc == 0x1E1E84u) {
        ctx->pc = 0x1E1E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1E80u;
        // 0x1e1e84: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1E88u;
        goto label_1e1e88;
    }
    ctx->pc = 0x1E1E80u;
    SET_GPR_U32(ctx, 31, 0x1E1E88u);
    ctx->pc = 0x1E1E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1E80u;
    // 0x1e1e84: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAD90u, 0x1E1E80u, 0x1E1E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1E88u;
label_1e1e88:
    // 0x1e1e88: 0x3c040039  lui         $a0, 0x39
    ctx->pc = 0x1e1e88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
label_1e1e8c:
    // 0x1e1e8c: 0x2484b760  addiu       $a0, $a0, -0x48A0
    ctx->pc = 0x1e1e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948704));
label_1e1e90:
    // 0x1e1e90: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
label_1e1e94:
    if (ctx->pc == 0x1E1E94u) {
        ctx->pc = 0x1E1E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1E90u;
        // 0x1e1e94: 0x3c060039  lui         $a2, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)57 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1E98u;
        goto label_1e1e98;
    }
    ctx->pc = 0x1E1E90u;
    {
        const bool branch_taken_0x1e1e90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1E90u;
        // 0x1e1e94: 0x3c060039  lui         $a2, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)57 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1e90) {
            ctx->pc = 0x1E1EC0u;
            goto label_1e1ec0;
        }
    }
    ctx->pc = 0x1E1E98u;
label_1e1e98:
    // 0x1e1e98: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1e1e98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e1e9c:
    // 0x1e1e9c: 0x24c6b9d0  addiu       $a2, $a2, -0x4630
    ctx->pc = 0x1e1e9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949328));
label_1e1ea0:
    // 0x1e1ea0: 0xc078c74  jal         func_1E31D0
label_1e1ea4:
    if (ctx->pc == 0x1E1EA4u) {
        ctx->pc = 0x1E1EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1EA0u;
        // 0x1e1ea4: 0xafdd0084  sw          $sp, 0x84($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 132), GPR_U32(ctx, 29));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1EA8u;
        goto label_1e1ea8;
    }
    ctx->pc = 0x1E1EA0u;
    SET_GPR_U32(ctx, 31, 0x1E1EA8u);
    ctx->pc = 0x1E1EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1EA0u;
    // 0x1e1ea4: 0xafdd0084  sw          $sp, 0x84($fp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 30), 132), GPR_U32(ctx, 29));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E31D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E31D0u, 0x1E1EA0u, 0x1E1EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1EA8u;
label_1e1ea8:
    // 0x1e1ea8: 0x10000005  b           . + 4 + (0x5 << 2)
label_1e1eac:
    if (ctx->pc == 0x1E1EACu) {
        ctx->pc = 0x1E1EB0u;
        goto label_1e1eb0;
    }
    ctx->pc = 0x1E1EA8u;
    {
        const bool branch_taken_0x1e1ea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e1ea8) {
            ctx->pc = 0x1E1EC0u;
            goto label_1e1ec0;
        }
    }
    ctx->pc = 0x1E1EB0u;
label_1e1eb0:
    // 0x1e1eb0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1e1eb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e1eb4:
    // 0x1e1eb4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e1eb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e1eb8:
    // 0x1e1eb8: 0xc07ab64  jal         func_1EAD90
label_1e1ebc:
    if (ctx->pc == 0x1E1EBCu) {
        ctx->pc = 0x1E1EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1EB8u;
        // 0x1e1ebc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1EC0u;
        goto label_1e1ec0;
    }
    ctx->pc = 0x1E1EB8u;
    SET_GPR_U32(ctx, 31, 0x1E1EC0u);
    ctx->pc = 0x1E1EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1EB8u;
    // 0x1e1ebc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAD90u, 0x1E1EB8u, 0x1E1EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1EC0u;
label_1e1ec0:
    // 0x1e1ec0: 0x3c040039  lui         $a0, 0x39
    ctx->pc = 0x1e1ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
label_1e1ec4:
    // 0x1e1ec4: 0x2484b700  addiu       $a0, $a0, -0x4900
    ctx->pc = 0x1e1ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948608));
label_1e1ec8:
    // 0x1e1ec8: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
label_1e1ecc:
    if (ctx->pc == 0x1E1ECCu) {
        ctx->pc = 0x1E1ED0u;
        goto label_1e1ed0;
    }
    ctx->pc = 0x1E1EC8u;
    {
        const bool branch_taken_0x1e1ec8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e1ec8) {
            ctx->pc = 0x1E1EFCu;
            goto label_1e1efc;
        }
    }
    ctx->pc = 0x1E1ED0u;
label_1e1ed0:
    // 0x1e1ed0: 0x3c060039  lui         $a2, 0x39
    ctx->pc = 0x1e1ed0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)57 << 16));
label_1e1ed4:
    // 0x1e1ed4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1e1ed4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e1ed8:
    // 0x1e1ed8: 0x24c6b9d0  addiu       $a2, $a2, -0x4630
    ctx->pc = 0x1e1ed8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949328));
label_1e1edc:
    // 0x1e1edc: 0xc078c74  jal         func_1E31D0
label_1e1ee0:
    if (ctx->pc == 0x1E1EE0u) {
        ctx->pc = 0x1E1EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1EDCu;
        // 0x1e1ee0: 0xafdd00a4  sw          $sp, 0xA4($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 164), GPR_U32(ctx, 29));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1EE4u;
        goto label_1e1ee4;
    }
    ctx->pc = 0x1E1EDCu;
    SET_GPR_U32(ctx, 31, 0x1E1EE4u);
    ctx->pc = 0x1E1EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1EDCu;
    // 0x1e1ee0: 0xafdd00a4  sw          $sp, 0xA4($fp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 30), 164), GPR_U32(ctx, 29));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E31D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E31D0u, 0x1E1EDCu, 0x1E1EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1EE4u;
label_1e1ee4:
    // 0x1e1ee4: 0x10000005  b           . + 4 + (0x5 << 2)
label_1e1ee8:
    if (ctx->pc == 0x1E1EE8u) {
        ctx->pc = 0x1E1EECu;
        goto label_1e1eec;
    }
    ctx->pc = 0x1E1EE4u;
    {
        const bool branch_taken_0x1e1ee4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e1ee4) {
            ctx->pc = 0x1E1EFCu;
            goto label_1e1efc;
        }
    }
    ctx->pc = 0x1E1EECu;
label_1e1eec:
    // 0x1e1eec: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1e1eecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e1ef0:
    // 0x1e1ef0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e1ef0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e1ef4:
    // 0x1e1ef4: 0xc07ab64  jal         func_1EAD90
label_1e1ef8:
    if (ctx->pc == 0x1E1EF8u) {
        ctx->pc = 0x1E1EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1EF4u;
        // 0x1e1ef8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1EFCu;
        goto label_1e1efc;
    }
    ctx->pc = 0x1E1EF4u;
    SET_GPR_U32(ctx, 31, 0x1E1EFCu);
    ctx->pc = 0x1E1EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1EF4u;
    // 0x1e1ef8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAD90u, 0x1E1EF4u, 0x1E1EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1EFCu;
label_1e1efc:
    // 0x1e1efc: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x1e1efcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
label_1e1f00:
    // 0x1e1f00: 0x3c070039  lui         $a3, 0x39
    ctx->pc = 0x1e1f00u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)57 << 16));
label_1e1f04:
    // 0x1e1f04: 0x8c22b630  lw          $v0, -0x49D0($at)
    ctx->pc = 0x1e1f04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294948400)));
label_1e1f08:
    // 0x1e1f08: 0x24e7b6a0  addiu       $a3, $a3, -0x4960
    ctx->pc = 0x1e1f08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294948512));
label_1e1f0c:
    // 0x1e1f0c: 0x3c040039  lui         $a0, 0x39
    ctx->pc = 0x1e1f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
label_1e1f10:
    // 0x1e1f10: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e1f10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e1f14:
    // 0x1e1f14: 0x2484b8f0  addiu       $a0, $a0, -0x4710
    ctx->pc = 0x1e1f14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949104));
label_1e1f18:
    // 0x1e1f18: 0xac470040  sw          $a3, 0x40($v0)
    ctx->pc = 0x1e1f18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 7));
label_1e1f1c:
    // 0x1e1f1c: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x1e1f1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
label_1e1f20:
    // 0x1e1f20: 0x8c22b760  lw          $v0, -0x48A0($at)
    ctx->pc = 0x1e1f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294948704)));
label_1e1f24:
    // 0x1e1f24: 0xac470040  sw          $a3, 0x40($v0)
    ctx->pc = 0x1e1f24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 7));
label_1e1f28:
    // 0x1e1f28: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x1e1f28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
label_1e1f2c:
    // 0x1e1f2c: 0x8c23b760  lw          $v1, -0x48A0($at)
    ctx->pc = 0x1e1f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294948704)));
label_1e1f30:
    // 0x1e1f30: 0x94620038  lhu         $v0, 0x38($v1)
    ctx->pc = 0x1e1f30u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 56)));
label_1e1f34:
    // 0x1e1f34: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x1e1f34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
label_1e1f38:
    // 0x1e1f38: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x1e1f38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
label_1e1f3c:
    // 0x1e1f3c: 0xa4620038  sh          $v0, 0x38($v1)
    ctx->pc = 0x1e1f3cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 56), (uint16_t)GPR_U32(ctx, 2));
label_1e1f40:
    // 0x1e1f40: 0x8c22b700  lw          $v0, -0x4900($at)
    ctx->pc = 0x1e1f40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294948608)));
label_1e1f44:
    // 0x1e1f44: 0xac470040  sw          $a3, 0x40($v0)
    ctx->pc = 0x1e1f44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 7));
label_1e1f48:
    // 0x1e1f48: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1e1f48u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e1f4c:
    // 0x1e1f4c: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1e1f4cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1e1f50:
    // 0x1e1f50: 0x320f809  jalr        $t9
label_1e1f54:
    if (ctx->pc == 0x1E1F54u) {
        ctx->pc = 0x1E1F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1F50u;
        // 0x1e1f54: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1F58u;
        goto label_1e1f58;
    }
    ctx->pc = 0x1E1F50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E1F58u);
        ctx->pc = 0x1E1F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1F50u;
        // 0x1e1f54: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E1F50u, 0x1E1F58u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E1F58u;
label_1e1f58:
    // 0x1e1f58: 0x3c040039  lui         $a0, 0x39
    ctx->pc = 0x1e1f58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
label_1e1f5c:
    // 0x1e1f5c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e1f5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e1f60:
    // 0x1e1f60: 0x2484b960  addiu       $a0, $a0, -0x46A0
    ctx->pc = 0x1e1f60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949216));
label_1e1f64:
    // 0x1e1f64: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1e1f64u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e1f68:
    // 0x1e1f68: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1e1f68u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1e1f6c:
    // 0x1e1f6c: 0x320f809  jalr        $t9
label_1e1f70:
    if (ctx->pc == 0x1E1F70u) {
        ctx->pc = 0x1E1F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1F6Cu;
        // 0x1e1f70: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1F74u;
        goto label_1e1f74;
    }
    ctx->pc = 0x1E1F6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E1F74u);
        ctx->pc = 0x1E1F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1F6Cu;
        // 0x1e1f70: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E1F6Cu, 0x1E1F74u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E1F74u;
label_1e1f74:
    // 0x1e1f74: 0x3c040039  lui         $a0, 0x39
    ctx->pc = 0x1e1f74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
label_1e1f78:
    // 0x1e1f78: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e1f78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e1f7c:
    // 0x1e1f7c: 0x2484b9d0  addiu       $a0, $a0, -0x4630
    ctx->pc = 0x1e1f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949328));
label_1e1f80:
    // 0x1e1f80: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1e1f80u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e1f84:
    // 0x1e1f84: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1e1f84u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1e1f88:
    // 0x1e1f88: 0x320f809  jalr        $t9
label_1e1f8c:
    if (ctx->pc == 0x1E1F8Cu) {
        ctx->pc = 0x1E1F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1F88u;
        // 0x1e1f8c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1F90u;
        goto label_1e1f90;
    }
    ctx->pc = 0x1E1F88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E1F90u);
        ctx->pc = 0x1E1F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1F88u;
        // 0x1e1f8c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E1F88u, 0x1E1F90u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E1F90u;
label_1e1f90:
    // 0x1e1f90: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1e1f90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e1f94:
    // 0x1e1f94: 0x3c0e821  addu        $sp, $fp, $zero
    ctx->pc = 0x1e1f94u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 0)));
label_1e1f98:
    // 0x1e1f98: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e1f98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1e1f9c:
    // 0x1e1f9c: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x1e1f9cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e1fa0:
    // 0x1e1fa0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e1fa0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e1fa4:
    // 0x1e1fa4: 0x3e00008  jr          $ra
label_1e1fa8:
    if (ctx->pc == 0x1E1FA8u) {
        ctx->pc = 0x1E1FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1FA4u;
        // 0x1e1fa8: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1FACu;
        goto label_fallthrough_0x1e1fa4;
    }
    ctx->pc = 0x1E1FA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E1FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1FA4u;
        // 0x1e1fa8: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E1FA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1e1fa4:
    ctx->pc = 0x1E1FACu;
}
