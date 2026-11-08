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

// Function: FUN_00170b70
// Address: 0x170b70 - 0x171008
void FUN_00170b70_0x170b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00170b70_0x170b70");
#endif

    switch (ctx->pc) {
        case 0x170b70u: goto label_170b70;
        case 0x170b74u: goto label_170b74;
        case 0x170b78u: goto label_170b78;
        case 0x170b7cu: goto label_170b7c;
        case 0x170b80u: goto label_170b80;
        case 0x170b84u: goto label_170b84;
        case 0x170b88u: goto label_170b88;
        case 0x170b8cu: goto label_170b8c;
        case 0x170b90u: goto label_170b90;
        case 0x170b94u: goto label_170b94;
        case 0x170b98u: goto label_170b98;
        case 0x170b9cu: goto label_170b9c;
        case 0x170ba0u: goto label_170ba0;
        case 0x170ba4u: goto label_170ba4;
        case 0x170ba8u: goto label_170ba8;
        case 0x170bacu: goto label_170bac;
        case 0x170bb0u: goto label_170bb0;
        case 0x170bb4u: goto label_170bb4;
        case 0x170bb8u: goto label_170bb8;
        case 0x170bbcu: goto label_170bbc;
        case 0x170bc0u: goto label_170bc0;
        case 0x170bc4u: goto label_170bc4;
        case 0x170bc8u: goto label_170bc8;
        case 0x170bccu: goto label_170bcc;
        case 0x170bd0u: goto label_170bd0;
        case 0x170bd4u: goto label_170bd4;
        case 0x170bd8u: goto label_170bd8;
        case 0x170bdcu: goto label_170bdc;
        case 0x170be0u: goto label_170be0;
        case 0x170be4u: goto label_170be4;
        case 0x170be8u: goto label_170be8;
        case 0x170becu: goto label_170bec;
        case 0x170bf0u: goto label_170bf0;
        case 0x170bf4u: goto label_170bf4;
        case 0x170bf8u: goto label_170bf8;
        case 0x170bfcu: goto label_170bfc;
        case 0x170c00u: goto label_170c00;
        case 0x170c04u: goto label_170c04;
        case 0x170c08u: goto label_170c08;
        case 0x170c0cu: goto label_170c0c;
        case 0x170c10u: goto label_170c10;
        case 0x170c14u: goto label_170c14;
        case 0x170c18u: goto label_170c18;
        case 0x170c1cu: goto label_170c1c;
        case 0x170c20u: goto label_170c20;
        case 0x170c24u: goto label_170c24;
        case 0x170c28u: goto label_170c28;
        case 0x170c2cu: goto label_170c2c;
        case 0x170c30u: goto label_170c30;
        case 0x170c34u: goto label_170c34;
        case 0x170c38u: goto label_170c38;
        case 0x170c3cu: goto label_170c3c;
        case 0x170c40u: goto label_170c40;
        case 0x170c44u: goto label_170c44;
        case 0x170c48u: goto label_170c48;
        case 0x170c4cu: goto label_170c4c;
        case 0x170c50u: goto label_170c50;
        case 0x170c54u: goto label_170c54;
        case 0x170c58u: goto label_170c58;
        case 0x170c5cu: goto label_170c5c;
        case 0x170c60u: goto label_170c60;
        case 0x170c64u: goto label_170c64;
        case 0x170c68u: goto label_170c68;
        case 0x170c6cu: goto label_170c6c;
        case 0x170c70u: goto label_170c70;
        case 0x170c74u: goto label_170c74;
        case 0x170c78u: goto label_170c78;
        case 0x170c7cu: goto label_170c7c;
        case 0x170c80u: goto label_170c80;
        case 0x170c84u: goto label_170c84;
        case 0x170c88u: goto label_170c88;
        case 0x170c8cu: goto label_170c8c;
        case 0x170c90u: goto label_170c90;
        case 0x170c94u: goto label_170c94;
        case 0x170c98u: goto label_170c98;
        case 0x170c9cu: goto label_170c9c;
        case 0x170ca0u: goto label_170ca0;
        case 0x170ca4u: goto label_170ca4;
        case 0x170ca8u: goto label_170ca8;
        case 0x170cacu: goto label_170cac;
        case 0x170cb0u: goto label_170cb0;
        case 0x170cb4u: goto label_170cb4;
        case 0x170cb8u: goto label_170cb8;
        case 0x170cbcu: goto label_170cbc;
        case 0x170cc0u: goto label_170cc0;
        case 0x170cc4u: goto label_170cc4;
        case 0x170cc8u: goto label_170cc8;
        case 0x170cccu: goto label_170ccc;
        case 0x170cd0u: goto label_170cd0;
        case 0x170cd4u: goto label_170cd4;
        case 0x170cd8u: goto label_170cd8;
        case 0x170cdcu: goto label_170cdc;
        case 0x170ce0u: goto label_170ce0;
        case 0x170ce4u: goto label_170ce4;
        case 0x170ce8u: goto label_170ce8;
        case 0x170cecu: goto label_170cec;
        case 0x170cf0u: goto label_170cf0;
        case 0x170cf4u: goto label_170cf4;
        case 0x170cf8u: goto label_170cf8;
        case 0x170cfcu: goto label_170cfc;
        case 0x170d00u: goto label_170d00;
        case 0x170d04u: goto label_170d04;
        case 0x170d08u: goto label_170d08;
        case 0x170d0cu: goto label_170d0c;
        case 0x170d10u: goto label_170d10;
        case 0x170d14u: goto label_170d14;
        case 0x170d18u: goto label_170d18;
        case 0x170d1cu: goto label_170d1c;
        case 0x170d20u: goto label_170d20;
        case 0x170d24u: goto label_170d24;
        case 0x170d28u: goto label_170d28;
        case 0x170d2cu: goto label_170d2c;
        case 0x170d30u: goto label_170d30;
        case 0x170d34u: goto label_170d34;
        case 0x170d38u: goto label_170d38;
        case 0x170d3cu: goto label_170d3c;
        case 0x170d40u: goto label_170d40;
        case 0x170d44u: goto label_170d44;
        case 0x170d48u: goto label_170d48;
        case 0x170d4cu: goto label_170d4c;
        case 0x170d50u: goto label_170d50;
        case 0x170d54u: goto label_170d54;
        case 0x170d58u: goto label_170d58;
        case 0x170d5cu: goto label_170d5c;
        case 0x170d60u: goto label_170d60;
        case 0x170d64u: goto label_170d64;
        case 0x170d68u: goto label_170d68;
        case 0x170d6cu: goto label_170d6c;
        case 0x170d70u: goto label_170d70;
        case 0x170d74u: goto label_170d74;
        case 0x170d78u: goto label_170d78;
        case 0x170d7cu: goto label_170d7c;
        case 0x170d80u: goto label_170d80;
        case 0x170d84u: goto label_170d84;
        case 0x170d88u: goto label_170d88;
        case 0x170d8cu: goto label_170d8c;
        case 0x170d90u: goto label_170d90;
        case 0x170d94u: goto label_170d94;
        case 0x170d98u: goto label_170d98;
        case 0x170d9cu: goto label_170d9c;
        case 0x170da0u: goto label_170da0;
        case 0x170da4u: goto label_170da4;
        case 0x170da8u: goto label_170da8;
        case 0x170dacu: goto label_170dac;
        case 0x170db0u: goto label_170db0;
        case 0x170db4u: goto label_170db4;
        case 0x170db8u: goto label_170db8;
        case 0x170dbcu: goto label_170dbc;
        case 0x170dc0u: goto label_170dc0;
        case 0x170dc4u: goto label_170dc4;
        case 0x170dc8u: goto label_170dc8;
        case 0x170dccu: goto label_170dcc;
        case 0x170dd0u: goto label_170dd0;
        case 0x170dd4u: goto label_170dd4;
        case 0x170dd8u: goto label_170dd8;
        case 0x170ddcu: goto label_170ddc;
        case 0x170de0u: goto label_170de0;
        case 0x170de4u: goto label_170de4;
        case 0x170de8u: goto label_170de8;
        case 0x170decu: goto label_170dec;
        case 0x170df0u: goto label_170df0;
        case 0x170df4u: goto label_170df4;
        case 0x170df8u: goto label_170df8;
        case 0x170dfcu: goto label_170dfc;
        case 0x170e00u: goto label_170e00;
        case 0x170e04u: goto label_170e04;
        case 0x170e08u: goto label_170e08;
        case 0x170e0cu: goto label_170e0c;
        case 0x170e10u: goto label_170e10;
        case 0x170e14u: goto label_170e14;
        case 0x170e18u: goto label_170e18;
        case 0x170e1cu: goto label_170e1c;
        case 0x170e20u: goto label_170e20;
        case 0x170e24u: goto label_170e24;
        case 0x170e28u: goto label_170e28;
        case 0x170e2cu: goto label_170e2c;
        case 0x170e30u: goto label_170e30;
        case 0x170e34u: goto label_170e34;
        case 0x170e38u: goto label_170e38;
        case 0x170e3cu: goto label_170e3c;
        case 0x170e40u: goto label_170e40;
        case 0x170e44u: goto label_170e44;
        case 0x170e48u: goto label_170e48;
        case 0x170e4cu: goto label_170e4c;
        case 0x170e50u: goto label_170e50;
        case 0x170e54u: goto label_170e54;
        case 0x170e58u: goto label_170e58;
        case 0x170e5cu: goto label_170e5c;
        case 0x170e60u: goto label_170e60;
        case 0x170e64u: goto label_170e64;
        case 0x170e68u: goto label_170e68;
        case 0x170e6cu: goto label_170e6c;
        case 0x170e70u: goto label_170e70;
        case 0x170e74u: goto label_170e74;
        case 0x170e78u: goto label_170e78;
        case 0x170e7cu: goto label_170e7c;
        case 0x170e80u: goto label_170e80;
        case 0x170e84u: goto label_170e84;
        case 0x170e88u: goto label_170e88;
        case 0x170e8cu: goto label_170e8c;
        case 0x170e90u: goto label_170e90;
        case 0x170e94u: goto label_170e94;
        case 0x170e98u: goto label_170e98;
        case 0x170e9cu: goto label_170e9c;
        case 0x170ea0u: goto label_170ea0;
        case 0x170ea4u: goto label_170ea4;
        case 0x170ea8u: goto label_170ea8;
        case 0x170eacu: goto label_170eac;
        case 0x170eb0u: goto label_170eb0;
        case 0x170eb4u: goto label_170eb4;
        case 0x170eb8u: goto label_170eb8;
        case 0x170ebcu: goto label_170ebc;
        case 0x170ec0u: goto label_170ec0;
        case 0x170ec4u: goto label_170ec4;
        case 0x170ec8u: goto label_170ec8;
        case 0x170eccu: goto label_170ecc;
        case 0x170ed0u: goto label_170ed0;
        case 0x170ed4u: goto label_170ed4;
        case 0x170ed8u: goto label_170ed8;
        case 0x170edcu: goto label_170edc;
        case 0x170ee0u: goto label_170ee0;
        case 0x170ee4u: goto label_170ee4;
        case 0x170ee8u: goto label_170ee8;
        case 0x170eecu: goto label_170eec;
        case 0x170ef0u: goto label_170ef0;
        case 0x170ef4u: goto label_170ef4;
        case 0x170ef8u: goto label_170ef8;
        case 0x170efcu: goto label_170efc;
        case 0x170f00u: goto label_170f00;
        case 0x170f04u: goto label_170f04;
        case 0x170f08u: goto label_170f08;
        case 0x170f0cu: goto label_170f0c;
        case 0x170f10u: goto label_170f10;
        case 0x170f14u: goto label_170f14;
        case 0x170f18u: goto label_170f18;
        case 0x170f1cu: goto label_170f1c;
        case 0x170f20u: goto label_170f20;
        case 0x170f24u: goto label_170f24;
        case 0x170f28u: goto label_170f28;
        case 0x170f2cu: goto label_170f2c;
        case 0x170f30u: goto label_170f30;
        case 0x170f34u: goto label_170f34;
        case 0x170f38u: goto label_170f38;
        case 0x170f3cu: goto label_170f3c;
        case 0x170f40u: goto label_170f40;
        case 0x170f44u: goto label_170f44;
        case 0x170f48u: goto label_170f48;
        case 0x170f4cu: goto label_170f4c;
        case 0x170f50u: goto label_170f50;
        case 0x170f54u: goto label_170f54;
        case 0x170f58u: goto label_170f58;
        case 0x170f5cu: goto label_170f5c;
        case 0x170f60u: goto label_170f60;
        case 0x170f64u: goto label_170f64;
        case 0x170f68u: goto label_170f68;
        case 0x170f6cu: goto label_170f6c;
        case 0x170f70u: goto label_170f70;
        case 0x170f74u: goto label_170f74;
        case 0x170f78u: goto label_170f78;
        case 0x170f7cu: goto label_170f7c;
        case 0x170f80u: goto label_170f80;
        case 0x170f84u: goto label_170f84;
        case 0x170f88u: goto label_170f88;
        case 0x170f8cu: goto label_170f8c;
        case 0x170f90u: goto label_170f90;
        case 0x170f94u: goto label_170f94;
        case 0x170f98u: goto label_170f98;
        case 0x170f9cu: goto label_170f9c;
        case 0x170fa0u: goto label_170fa0;
        case 0x170fa4u: goto label_170fa4;
        case 0x170fa8u: goto label_170fa8;
        case 0x170facu: goto label_170fac;
        case 0x170fb0u: goto label_170fb0;
        case 0x170fb4u: goto label_170fb4;
        case 0x170fb8u: goto label_170fb8;
        case 0x170fbcu: goto label_170fbc;
        case 0x170fc0u: goto label_170fc0;
        case 0x170fc4u: goto label_170fc4;
        case 0x170fc8u: goto label_170fc8;
        case 0x170fccu: goto label_170fcc;
        case 0x170fd0u: goto label_170fd0;
        case 0x170fd4u: goto label_170fd4;
        case 0x170fd8u: goto label_170fd8;
        case 0x170fdcu: goto label_170fdc;
        case 0x170fe0u: goto label_170fe0;
        case 0x170fe4u: goto label_170fe4;
        case 0x170fe8u: goto label_170fe8;
        case 0x170fecu: goto label_170fec;
        case 0x170ff0u: goto label_170ff0;
        case 0x170ff4u: goto label_170ff4;
        case 0x170ff8u: goto label_170ff8;
        case 0x170ffcu: goto label_170ffc;
        case 0x171000u: goto label_171000;
        case 0x171004u: goto label_171004;
        default: break;
    }

    ctx->pc = 0x170b70u;

label_170b70:
    // 0x170b70: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x170b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_170b74:
    // 0x170b74: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x170b74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_170b78:
    // 0x170b78: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x170b78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_170b7c:
    // 0x170b7c: 0x93828610  lbu         $v0, -0x79F0($gp)
    ctx->pc = 0x170b7cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936080)));
label_170b80:
    // 0x170b80: 0x1040004d  beqz        $v0, . + 4 + (0x4D << 2)
label_170b84:
    if (ctx->pc == 0x170B84u) {
        ctx->pc = 0x170B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170B80u;
        // 0x170b84: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x170B88u;
        goto label_170b88;
    }
    ctx->pc = 0x170B80u;
    {
        const bool branch_taken_0x170b80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x170B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170B80u;
        // 0x170b84: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170b80) {
            ctx->pc = 0x170CB8u;
            goto label_170cb8;
        }
    }
    ctx->pc = 0x170B88u;
label_170b88:
    // 0x170b88: 0x26040280  addiu       $a0, $s0, 0x280
    ctx->pc = 0x170b88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 640));
label_170b8c:
    // 0x170b8c: 0xc0628f0  jal         func_18A3C0
label_170b90:
    if (ctx->pc == 0x170B90u) {
        ctx->pc = 0x170B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170B8Cu;
        // 0x170b90: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x170B94u;
        goto label_170b94;
    }
    ctx->pc = 0x170B8Cu;
    SET_GPR_U32(ctx, 31, 0x170B94u);
    ctx->pc = 0x170B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170B8Cu;
    // 0x170b90: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A3C0u, 0x170B8Cu, 0x170B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170B94u;
label_170b94:
    // 0x170b94: 0x3c034180  lui         $v1, 0x4180
    ctx->pc = 0x170b94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16768 << 16));
label_170b98:
    // 0x170b98: 0x3c0243c8  lui         $v0, 0x43C8
    ctx->pc = 0x170b98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17352 << 16));
label_170b9c:
    // 0x170b9c: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x170b9cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_170ba0:
    // 0x170ba0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x170ba0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_170ba4:
    // 0x170ba4: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x170ba4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_170ba8:
    // 0x170ba8: 0xc06282c  jal         func_18A0B0
label_170bac:
    if (ctx->pc == 0x170BACu) {
        ctx->pc = 0x170BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170BA8u;
        // 0x170bac: 0x26040280  addiu       $a0, $s0, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 640));
        ctx->in_delay_slot = false;
        ctx->pc = 0x170BB0u;
        goto label_170bb0;
    }
    ctx->pc = 0x170BA8u;
    SET_GPR_U32(ctx, 31, 0x170BB0u);
    ctx->pc = 0x170BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170BA8u;
    // 0x170bac: 0x26040280  addiu       $a0, $s0, 0x280 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A0B0u, 0x170BA8u, 0x170BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170BB0u;
label_170bb0:
    // 0x170bb0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x170bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_170bb4:
    // 0x170bb4: 0x26040280  addiu       $a0, $s0, 0x280
    ctx->pc = 0x170bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 640));
label_170bb8:
    // 0x170bb8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x170bb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_170bbc:
    // 0x170bbc: 0x0  nop
    ctx->pc = 0x170bbcu;
    // NOP
label_170bc0:
    // 0x170bc0: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x170bc0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_170bc4:
    // 0x170bc4: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x170bc4u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_170bc8:
    // 0x170bc8: 0xc062860  jal         func_18A180
label_170bcc:
    if (ctx->pc == 0x170BCCu) {
        ctx->pc = 0x170BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170BC8u;
        // 0x170bcc: 0x460063c6  mov.s       $f15, $f12 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x170BD0u;
        goto label_170bd0;
    }
    ctx->pc = 0x170BC8u;
    SET_GPR_U32(ctx, 31, 0x170BD0u);
    ctx->pc = 0x170BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170BC8u;
    // 0x170bcc: 0x460063c6  mov.s       $f15, $f12 (Delay Slot)
    ctx->f[15] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A180u, 0x170BC8u, 0x170BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170BD0u;
label_170bd0:
    // 0x170bd0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x170bd0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_170bd4:
    // 0x170bd4: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x170bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_170bd8:
    // 0x170bd8: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x170bd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_170bdc:
    // 0x170bdc: 0x26040280  addiu       $a0, $s0, 0x280
    ctx->pc = 0x170bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 640));
label_170be0:
    // 0x170be0: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x170be0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_170be4:
    // 0x170be4: 0xc06286c  jal         func_18A1B0
label_170be8:
    if (ctx->pc == 0x170BE8u) {
        ctx->pc = 0x170BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170BE4u;
        // 0x170be8: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x170BECu;
        goto label_170bec;
    }
    ctx->pc = 0x170BE4u;
    SET_GPR_U32(ctx, 31, 0x170BECu);
    ctx->pc = 0x170BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170BE4u;
    // 0x170be8: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A1B0u, 0x170BE4u, 0x170BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170BECu;
label_170bec:
    // 0x170bec: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x170becu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_170bf0:
    // 0x170bf0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x170bf0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_170bf4:
    // 0x170bf4: 0xc062858  jal         func_18A160
label_170bf8:
    if (ctx->pc == 0x170BF8u) {
        ctx->pc = 0x170BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170BF4u;
        // 0x170bf8: 0x26040280  addiu       $a0, $s0, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 640));
        ctx->in_delay_slot = false;
        ctx->pc = 0x170BFCu;
        goto label_170bfc;
    }
    ctx->pc = 0x170BF4u;
    SET_GPR_U32(ctx, 31, 0x170BFCu);
    ctx->pc = 0x170BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170BF4u;
    // 0x170bf8: 0x26040280  addiu       $a0, $s0, 0x280 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A160u, 0x170BF4u, 0x170BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170BFCu;
label_170bfc:
    // 0x170bfc: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x170bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
label_170c00:
    // 0x170c00: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x170c00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_170c04:
    // 0x170c04: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x170c04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_170c08:
    // 0x170c08: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x170c08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_170c0c:
    // 0x170c0c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x170c0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_170c10:
    // 0x170c10: 0x10000003  b           . + 4 + (0x3 << 2)
label_170c14:
    if (ctx->pc == 0x170C14u) {
        ctx->pc = 0x170C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170C10u;
        // 0x170c14: 0x2403002a  addiu       $v1, $zero, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
        ctx->in_delay_slot = false;
        ctx->pc = 0x170C18u;
        goto label_170c18;
    }
    ctx->pc = 0x170C10u;
    {
        const bool branch_taken_0x170c10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x170C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170C10u;
        // 0x170c14: 0x2403002a  addiu       $v1, $zero, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170c10) {
            ctx->pc = 0x170C20u;
            goto label_170c20;
        }
    }
    ctx->pc = 0x170C18u;
label_170c18:
    // 0x170c18: 0xa0430020  sb          $v1, 0x20($v0)
    ctx->pc = 0x170c18u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 32), (uint8_t)GPR_U32(ctx, 3));
label_170c1c:
    // 0x170c1c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x170c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_170c20:
    // 0x170c20: 0xc6010244  lwc1        $f1, 0x244($s0)
    ctx->pc = 0x170c20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_170c24:
    // 0x170c24: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x170c24u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_170c28:
    // 0x170c28: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x170c28u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_170c2c:
    // 0x170c2c: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x170c2cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_170c30:
    // 0x170c30: 0x0  nop
    ctx->pc = 0x170c30u;
    // NOP
label_170c34:
    // 0x170c34: 0x82082a  slt         $at, $a0, $v0
    ctx->pc = 0x170c34u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_170c38:
    // 0x170c38: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
label_170c3c:
    if (ctx->pc == 0x170C3Cu) {
        ctx->pc = 0x170C40u;
        goto label_170c40;
    }
    ctx->pc = 0x170C38u;
    {
        const bool branch_taken_0x170c38 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x170c38) {
            ctx->pc = 0x170C70u;
            goto label_170c70;
        }
    }
    ctx->pc = 0x170C40u;
label_170c40:
    // 0x170c40: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x170c40u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_170c44:
    // 0x170c44: 0x0  nop
    ctx->pc = 0x170c44u;
    // NOP
label_170c48:
    // 0x170c48: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x170c48u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_170c4c:
    // 0x170c4c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x170c4cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_170c50:
    // 0x170c50: 0x0  nop
    ctx->pc = 0x170c50u;
    // NOP
label_170c54:
    // 0x170c54: 0x4501fff0  bc1t        . + 4 + (-0x10 << 2)
label_170c58:
    if (ctx->pc == 0x170C58u) {
        ctx->pc = 0x170C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170C54u;
        // 0x170c58: 0x9d1021  addu        $v0, $a0, $sp (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x170C5Cu;
        goto label_170c5c;
    }
    ctx->pc = 0x170C54u;
    {
        const bool branch_taken_0x170c54 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x170C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170C54u;
        // 0x170c58: 0x9d1021  addu        $v0, $a0, $sp (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170c54) {
            ctx->pc = 0x170C18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_170c18;
        }
    }
    ctx->pc = 0x170C5Cu;
label_170c5c:
    // 0x170c5c: 0x10000004  b           . + 4 + (0x4 << 2)
label_170c60:
    if (ctx->pc == 0x170C60u) {
        ctx->pc = 0x170C64u;
        goto label_170c64;
    }
    ctx->pc = 0x170C5Cu;
    {
        const bool branch_taken_0x170c5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x170c5c) {
            ctx->pc = 0x170C70u;
            goto label_170c70;
        }
    }
    ctx->pc = 0x170C64u;
label_170c64:
    // 0x170c64: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x170c64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_170c68:
    // 0x170c68: 0xa0430020  sb          $v1, 0x20($v0)
    ctx->pc = 0x170c68u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 32), (uint8_t)GPR_U32(ctx, 3));
label_170c6c:
    // 0x170c6c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x170c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_170c70:
    // 0x170c70: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x170c70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
label_170c74:
    // 0x170c74: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x170c74u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_170c78:
    // 0x170c78: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x170c78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_170c7c:
    // 0x170c7c: 0x0  nop
    ctx->pc = 0x170c7cu;
    // NOP
label_170c80:
    // 0x170c80: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x170c80u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_170c84:
    // 0x170c84: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x170c84u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_170c88:
    // 0x170c88: 0x0  nop
    ctx->pc = 0x170c88u;
    // NOP
label_170c8c:
    // 0x170c8c: 0x4501fff5  bc1t        . + 4 + (-0xB << 2)
label_170c90:
    if (ctx->pc == 0x170C90u) {
        ctx->pc = 0x170C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170C8Cu;
        // 0x170c90: 0x9d1021  addu        $v0, $a0, $sp (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x170C94u;
        goto label_170c94;
    }
    ctx->pc = 0x170C8Cu;
    {
        const bool branch_taken_0x170c8c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x170C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170C8Cu;
        // 0x170c90: 0x9d1021  addu        $v0, $a0, $sp (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170c8c) {
            ctx->pc = 0x170C64u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_170c64;
        }
    }
    ctx->pc = 0x170C94u;
label_170c94:
    // 0x170c94: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x170c94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_170c98:
    // 0x170c98: 0x9d1021  addu        $v0, $a0, $sp
    ctx->pc = 0x170c98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
label_170c9c:
    // 0x170c9c: 0xa0430020  sb          $v1, 0x20($v0)
    ctx->pc = 0x170c9cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 32), (uint8_t)GPR_U32(ctx, 3));
label_170ca0:
    // 0x170ca0: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x170ca0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_170ca4:
    // 0x170ca4: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x170ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_170ca8:
    // 0x170ca8: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x170ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_170cac:
    // 0x170cac: 0x26040280  addiu       $a0, $s0, 0x280
    ctx->pc = 0x170cacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 640));
label_170cb0:
    // 0x170cb0: 0xc062804  jal         func_18A010
label_170cb4:
    if (ctx->pc == 0x170CB4u) {
        ctx->pc = 0x170CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170CB0u;
        // 0x170cb4: 0xa0400020  sb          $zero, 0x20($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 32), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x170CB8u;
        goto label_170cb8;
    }
    ctx->pc = 0x170CB0u;
    SET_GPR_U32(ctx, 31, 0x170CB8u);
    ctx->pc = 0x170CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170CB0u;
    // 0x170cb4: 0xa0400020  sb          $zero, 0x20($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 32), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A010u, 0x170CB0u, 0x170CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170CB8u;
label_170cb8:
    // 0x170cb8: 0x8e04026c  lw          $a0, 0x26C($s0)
    ctx->pc = 0x170cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 620)));
label_170cbc:
    // 0x170cbc: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x170cbcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_170cc0:
    // 0x170cc0: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
label_170cc4:
    if (ctx->pc == 0x170CC4u) {
        ctx->pc = 0x170CC8u;
        goto label_170cc8;
    }
    ctx->pc = 0x170CC0u;
    {
        const bool branch_taken_0x170cc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x170cc0) {
            ctx->pc = 0x170D1Cu;
            goto label_170d1c;
        }
    }
    ctx->pc = 0x170CC8u;
label_170cc8:
    // 0x170cc8: 0xc6010244  lwc1        $f1, 0x244($s0)
    ctx->pc = 0x170cc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_170ccc:
    // 0x170ccc: 0x3c024033  lui         $v0, 0x4033
    ctx->pc = 0x170cccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16435 << 16));
label_170cd0:
    // 0x170cd0: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x170cd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
label_170cd4:
    // 0x170cd4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x170cd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_170cd8:
    // 0x170cd8: 0x0  nop
    ctx->pc = 0x170cd8u;
    // NOP
label_170cdc:
    // 0x170cdc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x170cdcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_170ce0:
    // 0x170ce0: 0x0  nop
    ctx->pc = 0x170ce0u;
    // NOP
label_170ce4:
    // 0x170ce4: 0x4501000d  bc1t        . + 4 + (0xD << 2)
label_170ce8:
    if (ctx->pc == 0x170CE8u) {
        ctx->pc = 0x170CECu;
        goto label_170cec;
    }
    ctx->pc = 0x170CE4u;
    {
        const bool branch_taken_0x170ce4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x170ce4) {
            ctx->pc = 0x170D1Cu;
            goto label_170d1c;
        }
    }
    ctx->pc = 0x170CECu;
label_170cec:
    // 0x170cec: 0x8c990004  lw          $t9, 0x4($a0)
    ctx->pc = 0x170cecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_170cf0:
    // 0x170cf0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x170cf0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_170cf4:
    // 0x170cf4: 0x320f809  jalr        $t9
label_170cf8:
    if (ctx->pc == 0x170CF8u) {
        ctx->pc = 0x170CFCu;
        goto label_170cfc;
    }
    ctx->pc = 0x170CF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x170CFCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x170CF4u, 0x170CFCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x170CFCu;
label_170cfc:
    // 0x170cfc: 0x8e02026c  lw          $v0, 0x26C($s0)
    ctx->pc = 0x170cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 620)));
label_170d00:
    // 0x170d00: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x170d00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_170d04:
    // 0x170d04: 0xc062d50  jal         func_18B540
label_170d08:
    if (ctx->pc == 0x170D08u) {
        ctx->pc = 0x170D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170D04u;
        // 0x170d08: 0xa0430000  sb          $v1, 0x0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x170D0Cu;
        goto label_170d0c;
    }
    ctx->pc = 0x170D04u;
    SET_GPR_U32(ctx, 31, 0x170D0Cu);
    ctx->pc = 0x170D08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170D04u;
    // 0x170d08: 0xa0430000  sb          $v1, 0x0($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B540u, 0x170D04u, 0x170D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170D0Cu;
label_170d0c:
    // 0x170d0c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x170d0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_170d10:
    // 0x170d10: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x170d10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_170d14:
    // 0x170d14: 0xc062b5c  jal         func_18AD70
label_170d18:
    if (ctx->pc == 0x170D18u) {
        ctx->pc = 0x170D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170D14u;
        // 0x170d18: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x170D1Cu;
        goto label_170d1c;
    }
    ctx->pc = 0x170D14u;
    SET_GPR_U32(ctx, 31, 0x170D1Cu);
    ctx->pc = 0x170D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170D14u;
    // 0x170d18: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AD70u, 0x170D14u, 0x170D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170D1Cu;
label_170d1c:
    // 0x170d1c: 0xc6010244  lwc1        $f1, 0x244($s0)
    ctx->pc = 0x170d1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_170d20:
    // 0x170d20: 0xc6000248  lwc1        $f0, 0x248($s0)
    ctx->pc = 0x170d20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_170d24:
    // 0x170d24: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x170d24u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_170d28:
    // 0x170d28: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x170d28u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_170d2c:
    // 0x170d2c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x170d2cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_170d30:
    // 0x170d30: 0x0  nop
    ctx->pc = 0x170d30u;
    // NOP
label_170d34:
    // 0x170d34: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_170d38:
    if (ctx->pc == 0x170D38u) {
        ctx->pc = 0x170D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170D34u;
        // 0x170d38: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x170D3Cu;
        goto label_170d3c;
    }
    ctx->pc = 0x170D34u;
    {
        const bool branch_taken_0x170d34 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x170D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170D34u;
        // 0x170d38: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170d34) {
            ctx->pc = 0x170D50u;
            goto label_170d50;
        }
    }
    ctx->pc = 0x170D3Cu;
label_170d3c:
    // 0x170d3c: 0xa2020264  sb          $v0, 0x264($s0)
    ctx->pc = 0x170d3cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 612), (uint8_t)GPR_U32(ctx, 2));
label_170d40:
    // 0x170d40: 0xae000244  sw          $zero, 0x244($s0)
    ctx->pc = 0x170d40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 580), GPR_U32(ctx, 0));
label_170d44:
    // 0x170d44: 0xae000268  sw          $zero, 0x268($s0)
    ctx->pc = 0x170d44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 616), GPR_U32(ctx, 0));
label_170d48:
    // 0x170d48: 0x8e02026c  lw          $v0, 0x26C($s0)
    ctx->pc = 0x170d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 620)));
label_170d4c:
    // 0x170d4c: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x170d4cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
label_170d50:
    // 0x170d50: 0x8e04026c  lw          $a0, 0x26C($s0)
    ctx->pc = 0x170d50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 620)));
label_170d54:
    // 0x170d54: 0x8c990004  lw          $t9, 0x4($a0)
    ctx->pc = 0x170d54u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_170d58:
    // 0x170d58: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x170d58u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_170d5c:
    // 0x170d5c: 0x320f809  jalr        $t9
label_170d60:
    if (ctx->pc == 0x170D60u) {
        ctx->pc = 0x170D64u;
        goto label_170d64;
    }
    ctx->pc = 0x170D5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x170D64u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x170D5Cu, 0x170D64u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x170D64u;
label_170d64:
    // 0x170d64: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_170d68:
    if (ctx->pc == 0x170D68u) {
        ctx->pc = 0x170D6Cu;
        goto label_170d6c;
    }
    ctx->pc = 0x170D64u;
    {
        const bool branch_taken_0x170d64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x170d64) {
            ctx->pc = 0x170D74u;
            goto label_170d74;
        }
    }
    ctx->pc = 0x170D6Cu;
label_170d6c:
    // 0x170d6c: 0x8e02026c  lw          $v0, 0x26C($s0)
    ctx->pc = 0x170d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 620)));
label_170d70:
    // 0x170d70: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x170d70u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
label_170d74:
    // 0x170d74: 0xc7818028  lwc1        $f1, -0x7FD8($gp)
    ctx->pc = 0x170d74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_170d78:
    // 0x170d78: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x170d78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_170d7c:
    // 0x170d7c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x170d7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_170d80:
    // 0x170d80: 0xc6000244  lwc1        $f0, 0x244($s0)
    ctx->pc = 0x170d80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_170d84:
    // 0x170d84: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x170d84u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_170d88:
    // 0x170d88: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x170d88u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_170d8c:
    // 0x170d8c: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x170d8cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_170d90:
    // 0x170d90: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x170d90u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_170d94:
    // 0x170d94: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x170d94u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_170d98:
    // 0x170d98: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x170d98u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
label_170d9c:
    // 0x170d9c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x170d9cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_170da0:
    // 0x170da0: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x170da0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_170da4:
    // 0x170da4: 0x0  nop
    ctx->pc = 0x170da4u;
    // NOP
label_170da8:
    // 0x170da8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_170dac:
    if (ctx->pc == 0x170DACu) {
        ctx->pc = 0x170DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170DA8u;
        // 0x170dac: 0xe6000244  swc1        $f0, 0x244($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 580), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x170DB0u;
        goto label_170db0;
    }
    ctx->pc = 0x170DA8u;
    {
        const bool branch_taken_0x170da8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x170DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170DA8u;
        // 0x170dac: 0xe6000244  swc1        $f0, 0x244($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 580), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x170da8) {
            ctx->pc = 0x170DB4u;
            goto label_170db4;
        }
    }
    ctx->pc = 0x170DB0u;
label_170db0:
    // 0x170db0: 0xe6030244  swc1        $f3, 0x244($s0)
    ctx->pc = 0x170db0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 580), bits); }
label_170db4:
    // 0x170db4: 0x92020264  lbu         $v0, 0x264($s0)
    ctx->pc = 0x170db4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 612)));
label_170db8:
    // 0x170db8: 0x14400077  bnez        $v0, . + 4 + (0x77 << 2)
label_170dbc:
    if (ctx->pc == 0x170DBCu) {
        ctx->pc = 0x170DC0u;
        goto label_170dc0;
    }
    ctx->pc = 0x170DB8u;
    {
        const bool branch_taken_0x170db8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x170db8) {
            ctx->pc = 0x170F98u;
            goto label_170f98;
        }
    }
    ctx->pc = 0x170DC0u;
label_170dc0:
    // 0x170dc0: 0x8e030234  lw          $v1, 0x234($s0)
    ctx->pc = 0x170dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 564)));
label_170dc4:
    // 0x170dc4: 0x1c600004  bgtz        $v1, . + 4 + (0x4 << 2)
label_170dc8:
    if (ctx->pc == 0x170DC8u) {
        ctx->pc = 0x170DCCu;
        goto label_170dcc;
    }
    ctx->pc = 0x170DC4u;
    {
        const bool branch_taken_0x170dc4 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x170dc4) {
            ctx->pc = 0x170DD8u;
            goto label_170dd8;
        }
    }
    ctx->pc = 0x170DCCu;
label_170dcc:
    // 0x170dcc: 0x8e020238  lw          $v0, 0x238($s0)
    ctx->pc = 0x170dccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 568)));
label_170dd0:
    // 0x170dd0: 0x18400013  blez        $v0, . + 4 + (0x13 << 2)
label_170dd4:
    if (ctx->pc == 0x170DD4u) {
        ctx->pc = 0x170DD8u;
        goto label_170dd8;
    }
    ctx->pc = 0x170DD0u;
    {
        const bool branch_taken_0x170dd0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x170dd0) {
            ctx->pc = 0x170E20u;
            goto label_170e20;
        }
    }
    ctx->pc = 0x170DD8u;
label_170dd8:
    // 0x170dd8: 0xc6010258  lwc1        $f1, 0x258($s0)
    ctx->pc = 0x170dd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_170ddc:
    // 0x170ddc: 0x3c023eaa  lui         $v0, 0x3EAA
    ctx->pc = 0x170ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16042 << 16));
label_170de0:
    // 0x170de0: 0x3442aaab  ori         $v0, $v0, 0xAAAB
    ctx->pc = 0x170de0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43691);
label_170de4:
    // 0x170de4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x170de4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_170de8:
    // 0x170de8: 0x0  nop
    ctx->pc = 0x170de8u;
    // NOP
label_170dec:
    // 0x170dec: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x170decu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_170df0:
    // 0x170df0: 0x0  nop
    ctx->pc = 0x170df0u;
    // NOP
label_170df4:
    // 0x170df4: 0x4500000a  bc1f        . + 4 + (0xA << 2)
label_170df8:
    if (ctx->pc == 0x170DF8u) {
        ctx->pc = 0x170DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170DF4u;
        // 0x170df8: 0x3102a  slt         $v0, $zero, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x170DFCu;
        goto label_170dfc;
    }
    ctx->pc = 0x170DF4u;
    {
        const bool branch_taken_0x170df4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x170DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170DF4u;
        // 0x170df8: 0x3102a  slt         $v0, $zero, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x170df4) {
            ctx->pc = 0x170E20u;
            goto label_170e20;
        }
    }
    ctx->pc = 0x170DFCu;
label_170dfc:
    // 0x170dfc: 0xa2020260  sb          $v0, 0x260($s0)
    ctx->pc = 0x170dfcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 608), (uint8_t)GPR_U32(ctx, 2));
label_170e00:
    // 0x170e00: 0x8e020238  lw          $v0, 0x238($s0)
    ctx->pc = 0x170e00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 568)));
label_170e04:
    // 0x170e04: 0x2102a  slt         $v0, $zero, $v0
    ctx->pc = 0x170e04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_170e08:
    // 0x170e08: 0xa2020261  sb          $v0, 0x261($s0)
    ctx->pc = 0x170e08u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 609), (uint8_t)GPR_U32(ctx, 2));
label_170e0c:
    // 0x170e0c: 0xc6010254  lwc1        $f1, 0x254($s0)
    ctx->pc = 0x170e0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 596)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_170e10:
    // 0x170e10: 0xc6000258  lwc1        $f0, 0x258($s0)
    ctx->pc = 0x170e10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_170e14:
    // 0x170e14: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x170e14u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_170e18:
    // 0x170e18: 0x1000005f  b           . + 4 + (0x5F << 2)
label_170e1c:
    if (ctx->pc == 0x170E1Cu) {
        ctx->pc = 0x170E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170E18u;
        // 0x170e1c: 0xe6000258  swc1        $f0, 0x258($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 600), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x170E20u;
        goto label_170e20;
    }
    ctx->pc = 0x170E18u;
    {
        const bool branch_taken_0x170e18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x170E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170E18u;
        // 0x170e1c: 0xe6000258  swc1        $f0, 0x258($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 600), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x170e18) {
            ctx->pc = 0x170F98u;
            goto label_170f98;
        }
    }
    ctx->pc = 0x170E20u;
label_170e20:
    // 0x170e20: 0xc6010258  lwc1        $f1, 0x258($s0)
    ctx->pc = 0x170e20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_170e24:
    // 0x170e24: 0x3c023eaa  lui         $v0, 0x3EAA
    ctx->pc = 0x170e24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16042 << 16));
label_170e28:
    // 0x170e28: 0x3442aaab  ori         $v0, $v0, 0xAAAB
    ctx->pc = 0x170e28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43691);
label_170e2c:
    // 0x170e2c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x170e2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_170e30:
    // 0x170e30: 0x0  nop
    ctx->pc = 0x170e30u;
    // NOP
label_170e34:
    // 0x170e34: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x170e34u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_170e38:
    // 0x170e38: 0x0  nop
    ctx->pc = 0x170e38u;
    // NOP
label_170e3c:
    // 0x170e3c: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_170e40:
    if (ctx->pc == 0x170E40u) {
        ctx->pc = 0x170E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170E3Cu;
        // 0x170e40: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x170E44u;
        goto label_170e44;
    }
    ctx->pc = 0x170E3Cu;
    {
        const bool branch_taken_0x170e3c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x170E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170E3Cu;
        // 0x170e40: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170e3c) {
            ctx->pc = 0x170E60u;
            goto label_170e60;
        }
    }
    ctx->pc = 0x170E44u;
label_170e44:
    // 0x170e44: 0x0  nop
    ctx->pc = 0x170e44u;
    // NOP
label_170e48:
    // 0x170e48: 0x0  nop
    ctx->pc = 0x170e48u;
    // NOP
label_170e4c:
    // 0x170e4c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x170e4cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_170e50:
    // 0x170e50: 0x0  nop
    ctx->pc = 0x170e50u;
    // NOP
label_170e54:
    // 0x170e54: 0x0  nop
    ctx->pc = 0x170e54u;
    // NOP
label_170e58:
    // 0x170e58: 0x10000002  b           . + 4 + (0x2 << 2)
label_170e5c:
    if (ctx->pc == 0x170E5Cu) {
        ctx->pc = 0x170E60u;
        goto label_170e60;
    }
    ctx->pc = 0x170E58u;
    {
        const bool branch_taken_0x170e58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x170e58) {
            ctx->pc = 0x170E64u;
            goto label_170e64;
        }
    }
    ctx->pc = 0x170E60u;
label_170e60:
    // 0x170e60: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x170e60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_170e64:
    // 0x170e64: 0xe600025c  swc1        $f0, 0x25C($s0)
    ctx->pc = 0x170e64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 604), bits); }
label_170e68:
    // 0x170e68: 0xae000258  sw          $zero, 0x258($s0)
    ctx->pc = 0x170e68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 600), GPR_U32(ctx, 0));
label_170e6c:
    // 0x170e6c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x170e6cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_170e70:
    // 0x170e70: 0x92030260  lbu         $v1, 0x260($s0)
    ctx->pc = 0x170e70u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 608)));
label_170e74:
    // 0x170e74: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
label_170e78:
    if (ctx->pc == 0x170E78u) {
        ctx->pc = 0x170E7Cu;
        goto label_170e7c;
    }
    ctx->pc = 0x170E74u;
    {
        const bool branch_taken_0x170e74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x170e74) {
            ctx->pc = 0x170ED4u;
            goto label_170ed4;
        }
    }
    ctx->pc = 0x170E7Cu;
label_170e7c:
    // 0x170e7c: 0x92020261  lbu         $v0, 0x261($s0)
    ctx->pc = 0x170e7cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 609)));
label_170e80:
    // 0x170e80: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_170e84:
    if (ctx->pc == 0x170E84u) {
        ctx->pc = 0x170E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170E80u;
        // 0x170e84: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x170E88u;
        goto label_170e88;
    }
    ctx->pc = 0x170E80u;
    {
        const bool branch_taken_0x170e80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x170E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170E80u;
        // 0x170e84: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170e80) {
            ctx->pc = 0x170ED4u;
            goto label_170ed4;
        }
    }
    ctx->pc = 0x170E88u;
label_170e88:
    // 0x170e88: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x170e88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_170e8c:
    // 0x170e8c: 0xae050230  sw          $a1, 0x230($s0)
    ctx->pc = 0x170e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 560), GPR_U32(ctx, 5));
label_170e90:
    // 0x170e90: 0xae000228  sw          $zero, 0x228($s0)
    ctx->pc = 0x170e90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 552), GPR_U32(ctx, 0));
label_170e94:
    // 0x170e94: 0xae00022c  sw          $zero, 0x22C($s0)
    ctx->pc = 0x170e94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 556), GPR_U32(ctx, 0));
label_170e98:
    // 0x170e98: 0xc601025c  lwc1        $f1, 0x25C($s0)
    ctx->pc = 0x170e98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 604)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_170e9c:
    // 0x170e9c: 0xae050270  sw          $a1, 0x270($s0)
    ctx->pc = 0x170e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 624), GPR_U32(ctx, 5));
label_170ea0:
    // 0x170ea0: 0xe6010274  swc1        $f1, 0x274($s0)
    ctx->pc = 0x170ea0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 628), bits); }
label_170ea4:
    // 0x170ea4: 0xe6000278  swc1        $f0, 0x278($s0)
    ctx->pc = 0x170ea4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 632), bits); }
label_170ea8:
    // 0x170ea8: 0xe4207508  swc1        $f0, 0x7508($at)
    ctx->pc = 0x170ea8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 29960), bits); }
label_170eac:
    // 0x170eac: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x170eacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_170eb0:
    // 0x170eb0: 0xe4207500  swc1        $f0, 0x7500($at)
    ctx->pc = 0x170eb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 29952), bits); }
label_170eb4:
    // 0x170eb4: 0xa2000261  sb          $zero, 0x261($s0)
    ctx->pc = 0x170eb4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 609), (uint8_t)GPR_U32(ctx, 0));
label_170eb8:
    // 0x170eb8: 0xa2000260  sb          $zero, 0x260($s0)
    ctx->pc = 0x170eb8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 608), (uint8_t)GPR_U32(ctx, 0));
label_170ebc:
    // 0x170ebc: 0x8e190008  lw          $t9, 0x8($s0)
    ctx->pc = 0x170ebcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_170ec0:
    // 0x170ec0: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x170ec0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_170ec4:
    // 0x170ec4: 0x320f809  jalr        $t9
label_170ec8:
    if (ctx->pc == 0x170EC8u) {
        ctx->pc = 0x170EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170EC4u;
        // 0x170ec8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x170ECCu;
        goto label_170ecc;
    }
    ctx->pc = 0x170EC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x170ECCu);
        ctx->pc = 0x170EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170EC4u;
        // 0x170ec8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x170EC4u, 0x170ECCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x170ECCu;
label_170ecc:
    // 0x170ecc: 0x10000033  b           . + 4 + (0x33 << 2)
label_170ed0:
    if (ctx->pc == 0x170ED0u) {
        ctx->pc = 0x170ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170ECCu;
        // 0x170ed0: 0x8e0201d4  lw          $v0, 0x1D4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 468)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x170ED4u;
        goto label_170ed4;
    }
    ctx->pc = 0x170ECCu;
    {
        const bool branch_taken_0x170ecc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x170ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170ECCu;
        // 0x170ed0: 0x8e0201d4  lw          $v0, 0x1D4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 468)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170ecc) {
            ctx->pc = 0x170F9Cu;
            goto label_170f9c;
        }
    }
    ctx->pc = 0x170ED4u;
label_170ed4:
    // 0x170ed4: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
label_170ed8:
    if (ctx->pc == 0x170ED8u) {
        ctx->pc = 0x170EDCu;
        goto label_170edc;
    }
    ctx->pc = 0x170ED4u;
    {
        const bool branch_taken_0x170ed4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x170ed4) {
            ctx->pc = 0x170F30u;
            goto label_170f30;
        }
    }
    ctx->pc = 0x170EDCu;
label_170edc:
    // 0x170edc: 0xae000230  sw          $zero, 0x230($s0)
    ctx->pc = 0x170edcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 560), GPR_U32(ctx, 0));
label_170ee0:
    // 0x170ee0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x170ee0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_170ee4:
    // 0x170ee4: 0xae050228  sw          $a1, 0x228($s0)
    ctx->pc = 0x170ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 552), GPR_U32(ctx, 5));
label_170ee8:
    // 0x170ee8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x170ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_170eec:
    // 0x170eec: 0xae00022c  sw          $zero, 0x22C($s0)
    ctx->pc = 0x170eecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 556), GPR_U32(ctx, 0));
label_170ef0:
    // 0x170ef0: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x170ef0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_170ef4:
    // 0x170ef4: 0xc600025c  lwc1        $f0, 0x25C($s0)
    ctx->pc = 0x170ef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 604)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_170ef8:
    // 0x170ef8: 0xae020270  sw          $v0, 0x270($s0)
    ctx->pc = 0x170ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 624), GPR_U32(ctx, 2));
label_170efc:
    // 0x170efc: 0xe6000274  swc1        $f0, 0x274($s0)
    ctx->pc = 0x170efcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 628), bits); }
label_170f00:
    // 0x170f00: 0xae000278  sw          $zero, 0x278($s0)
    ctx->pc = 0x170f00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 632), GPR_U32(ctx, 0));
label_170f04:
    // 0x170f04: 0xac207508  sw          $zero, 0x7508($at)
    ctx->pc = 0x170f04u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 29960), GPR_U32(ctx, 0));
label_170f08:
    // 0x170f08: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x170f08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_170f0c:
    // 0x170f0c: 0xac207500  sw          $zero, 0x7500($at)
    ctx->pc = 0x170f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 29952), GPR_U32(ctx, 0));
label_170f10:
    // 0x170f10: 0xa2000261  sb          $zero, 0x261($s0)
    ctx->pc = 0x170f10u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 609), (uint8_t)GPR_U32(ctx, 0));
label_170f14:
    // 0x170f14: 0xa2000260  sb          $zero, 0x260($s0)
    ctx->pc = 0x170f14u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 608), (uint8_t)GPR_U32(ctx, 0));
label_170f18:
    // 0x170f18: 0x8e190008  lw          $t9, 0x8($s0)
    ctx->pc = 0x170f18u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_170f1c:
    // 0x170f1c: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x170f1cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_170f20:
    // 0x170f20: 0x320f809  jalr        $t9
label_170f24:
    if (ctx->pc == 0x170F24u) {
        ctx->pc = 0x170F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170F20u;
        // 0x170f24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x170F28u;
        goto label_170f28;
    }
    ctx->pc = 0x170F20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x170F28u);
        ctx->pc = 0x170F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170F20u;
        // 0x170f24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x170F20u, 0x170F28u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x170F28u;
label_170f28:
    // 0x170f28: 0x1000001b  b           . + 4 + (0x1B << 2)
label_170f2c:
    if (ctx->pc == 0x170F2Cu) {
        ctx->pc = 0x170F30u;
        goto label_170f30;
    }
    ctx->pc = 0x170F28u;
    {
        const bool branch_taken_0x170f28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x170f28) {
            ctx->pc = 0x170F98u;
            goto label_170f98;
        }
    }
    ctx->pc = 0x170F30u;
label_170f30:
    // 0x170f30: 0x92020261  lbu         $v0, 0x261($s0)
    ctx->pc = 0x170f30u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 609)));
label_170f34:
    // 0x170f34: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_170f38:
    if (ctx->pc == 0x170F38u) {
        ctx->pc = 0x170F3Cu;
        goto label_170f3c;
    }
    ctx->pc = 0x170F34u;
    {
        const bool branch_taken_0x170f34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x170f34) {
            ctx->pc = 0x170F90u;
            goto label_170f90;
        }
    }
    ctx->pc = 0x170F3Cu;
label_170f3c:
    // 0x170f3c: 0xae000230  sw          $zero, 0x230($s0)
    ctx->pc = 0x170f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 560), GPR_U32(ctx, 0));
label_170f40:
    // 0x170f40: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x170f40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_170f44:
    // 0x170f44: 0xae000228  sw          $zero, 0x228($s0)
    ctx->pc = 0x170f44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 552), GPR_U32(ctx, 0));
label_170f48:
    // 0x170f48: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x170f48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_170f4c:
    // 0x170f4c: 0xae05022c  sw          $a1, 0x22C($s0)
    ctx->pc = 0x170f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 556), GPR_U32(ctx, 5));
label_170f50:
    // 0x170f50: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x170f50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_170f54:
    // 0x170f54: 0xc600025c  lwc1        $f0, 0x25C($s0)
    ctx->pc = 0x170f54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 604)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_170f58:
    // 0x170f58: 0xae020270  sw          $v0, 0x270($s0)
    ctx->pc = 0x170f58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 624), GPR_U32(ctx, 2));
label_170f5c:
    // 0x170f5c: 0xe6000274  swc1        $f0, 0x274($s0)
    ctx->pc = 0x170f5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 628), bits); }
label_170f60:
    // 0x170f60: 0xae000278  sw          $zero, 0x278($s0)
    ctx->pc = 0x170f60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 632), GPR_U32(ctx, 0));
label_170f64:
    // 0x170f64: 0xac207508  sw          $zero, 0x7508($at)
    ctx->pc = 0x170f64u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 29960), GPR_U32(ctx, 0));
label_170f68:
    // 0x170f68: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x170f68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_170f6c:
    // 0x170f6c: 0xac207500  sw          $zero, 0x7500($at)
    ctx->pc = 0x170f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 29952), GPR_U32(ctx, 0));
label_170f70:
    // 0x170f70: 0xa2000261  sb          $zero, 0x261($s0)
    ctx->pc = 0x170f70u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 609), (uint8_t)GPR_U32(ctx, 0));
label_170f74:
    // 0x170f74: 0xa2000260  sb          $zero, 0x260($s0)
    ctx->pc = 0x170f74u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 608), (uint8_t)GPR_U32(ctx, 0));
label_170f78:
    // 0x170f78: 0x8e190008  lw          $t9, 0x8($s0)
    ctx->pc = 0x170f78u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_170f7c:
    // 0x170f7c: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x170f7cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_170f80:
    // 0x170f80: 0x320f809  jalr        $t9
label_170f84:
    if (ctx->pc == 0x170F84u) {
        ctx->pc = 0x170F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170F80u;
        // 0x170f84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x170F88u;
        goto label_170f88;
    }
    ctx->pc = 0x170F80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x170F88u);
        ctx->pc = 0x170F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170F80u;
        // 0x170f84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x170F80u, 0x170F88u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x170F88u;
label_170f88:
    // 0x170f88: 0x10000003  b           . + 4 + (0x3 << 2)
label_170f8c:
    if (ctx->pc == 0x170F8Cu) {
        ctx->pc = 0x170F90u;
        goto label_170f90;
    }
    ctx->pc = 0x170F88u;
    {
        const bool branch_taken_0x170f88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x170f88) {
            ctx->pc = 0x170F98u;
            goto label_170f98;
        }
    }
    ctx->pc = 0x170F90u;
label_170f90:
    // 0x170f90: 0xa2000260  sb          $zero, 0x260($s0)
    ctx->pc = 0x170f90u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 608), (uint8_t)GPR_U32(ctx, 0));
label_170f94:
    // 0x170f94: 0xa2000261  sb          $zero, 0x261($s0)
    ctx->pc = 0x170f94u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 609), (uint8_t)GPR_U32(ctx, 0));
label_170f98:
    // 0x170f98: 0x8e0201d4  lw          $v0, 0x1D4($s0)
    ctx->pc = 0x170f98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 468)));
label_170f9c:
    // 0x170f9c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_170fa0:
    if (ctx->pc == 0x170FA0u) {
        ctx->pc = 0x170FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170F9Cu;
        // 0x170fa0: 0x26040270  addiu       $a0, $s0, 0x270 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 624));
        ctx->in_delay_slot = false;
        ctx->pc = 0x170FA4u;
        goto label_170fa4;
    }
    ctx->pc = 0x170F9Cu;
    {
        const bool branch_taken_0x170f9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x170FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170F9Cu;
        // 0x170fa0: 0x26040270  addiu       $a0, $s0, 0x270 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 624));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170f9c) {
            ctx->pc = 0x170FB0u;
            goto label_170fb0;
        }
    }
    ctx->pc = 0x170FA4u;
label_170fa4:
    // 0x170fa4: 0xc05c1b0  jal         func_1706C0
label_170fa8:
    if (ctx->pc == 0x170FA8u) {
        ctx->pc = 0x170FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170FA4u;
        // 0x170fa8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x170FACu;
        goto label_170fac;
    }
    ctx->pc = 0x170FA4u;
    SET_GPR_U32(ctx, 31, 0x170FACu);
    ctx->pc = 0x170FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170FA4u;
    // 0x170fa8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1706C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1706C0u, 0x170FA4u, 0x170FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170FACu;
label_170fac:
    // 0x170fac: 0x26040270  addiu       $a0, $s0, 0x270
    ctx->pc = 0x170facu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 624));
label_170fb0:
    // 0x170fb0: 0xc05c274  jal         func_1709D0
label_170fb4:
    if (ctx->pc == 0x170FB4u) {
        ctx->pc = 0x170FB8u;
        goto label_170fb8;
    }
    ctx->pc = 0x170FB0u;
    SET_GPR_U32(ctx, 31, 0x170FB8u);
    ctx->pc = 0x1709D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1709D0u, 0x170FB0u, 0x170FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170FB8u;
label_170fb8:
    // 0x170fb8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_170fbc:
    if (ctx->pc == 0x170FBCu) {
        ctx->pc = 0x170FC0u;
        goto label_170fc0;
    }
    ctx->pc = 0x170FB8u;
    {
        const bool branch_taken_0x170fb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x170fb8) {
            ctx->pc = 0x170FD0u;
            goto label_170fd0;
        }
    }
    ctx->pc = 0x170FC0u;
label_170fc0:
    // 0x170fc0: 0x92030264  lbu         $v1, 0x264($s0)
    ctx->pc = 0x170fc0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 612)));
label_170fc4:
    // 0x170fc4: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_170fc8:
    if (ctx->pc == 0x170FC8u) {
        ctx->pc = 0x170FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170FC4u;
        // 0x170fc8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x170FCCu;
        goto label_170fcc;
    }
    ctx->pc = 0x170FC4u;
    {
        const bool branch_taken_0x170fc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x170FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170FC4u;
        // 0x170fc8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170fc4) {
            ctx->pc = 0x170FD0u;
            goto label_170fd0;
        }
    }
    ctx->pc = 0x170FCCu;
label_170fcc:
    // 0x170fcc: 0xa2030265  sb          $v1, 0x265($s0)
    ctx->pc = 0x170fccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 613), (uint8_t)GPR_U32(ctx, 3));
label_170fd0:
    // 0x170fd0: 0x92030265  lbu         $v1, 0x265($s0)
    ctx->pc = 0x170fd0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 613)));
label_170fd4:
    // 0x170fd4: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_170fd8:
    if (ctx->pc == 0x170FD8u) {
        ctx->pc = 0x170FDCu;
        goto label_170fdc;
    }
    ctx->pc = 0x170FD4u;
    {
        const bool branch_taken_0x170fd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x170fd4) {
            ctx->pc = 0x170FF0u;
            goto label_170ff0;
        }
    }
    ctx->pc = 0x170FDCu;
label_170fdc:
    // 0x170fdc: 0x8f838714  lw          $v1, -0x78EC($gp)
    ctx->pc = 0x170fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
label_170fe0:
    // 0x170fe0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x170fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_170fe4:
    // 0x170fe4: 0xac642798  sw          $a0, 0x2798($v1)
    ctx->pc = 0x170fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 10136), GPR_U32(ctx, 4));
label_170fe8:
    // 0x170fe8: 0x10000003  b           . + 4 + (0x3 << 2)
label_170fec:
    if (ctx->pc == 0x170FECu) {
        ctx->pc = 0x170FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170FE8u;
        // 0x170fec: 0xa2000265  sb          $zero, 0x265($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 613), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x170FF0u;
        goto label_170ff0;
    }
    ctx->pc = 0x170FE8u;
    {
        const bool branch_taken_0x170fe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x170FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170FE8u;
        // 0x170fec: 0xa2000265  sb          $zero, 0x265($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 613), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170fe8) {
            ctx->pc = 0x170FF8u;
            goto label_170ff8;
        }
    }
    ctx->pc = 0x170FF0u;
label_170ff0:
    // 0x170ff0: 0x8f838714  lw          $v1, -0x78EC($gp)
    ctx->pc = 0x170ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
label_170ff4:
    // 0x170ff4: 0xac602798  sw          $zero, 0x2798($v1)
    ctx->pc = 0x170ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 10136), GPR_U32(ctx, 0));
label_170ff8:
    // 0x170ff8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x170ff8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_170ffc:
    // 0x170ffc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x170ffcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_171000:
    // 0x171000: 0x3e00008  jr          $ra
label_171004:
    if (ctx->pc == 0x171004u) {
        ctx->pc = 0x171004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171000u;
        // 0x171004: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x171008u;
        goto label_fallthrough_0x171000;
    }
    ctx->pc = 0x171000u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x171004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171000u;
        // 0x171004: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x171000u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x171000:
    ctx->pc = 0x171008u;
}
