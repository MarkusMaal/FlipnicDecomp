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

// Function: FUN_0016c100
// Address: 0x16c100 - 0x16c370
void FUN_0016c100_0x16c100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0016c100_0x16c100");
#endif

    switch (ctx->pc) {
        case 0x16c100u: goto label_16c100;
        case 0x16c104u: goto label_16c104;
        case 0x16c108u: goto label_16c108;
        case 0x16c10cu: goto label_16c10c;
        case 0x16c110u: goto label_16c110;
        case 0x16c114u: goto label_16c114;
        case 0x16c118u: goto label_16c118;
        case 0x16c11cu: goto label_16c11c;
        case 0x16c120u: goto label_16c120;
        case 0x16c124u: goto label_16c124;
        case 0x16c128u: goto label_16c128;
        case 0x16c12cu: goto label_16c12c;
        case 0x16c130u: goto label_16c130;
        case 0x16c134u: goto label_16c134;
        case 0x16c138u: goto label_16c138;
        case 0x16c13cu: goto label_16c13c;
        case 0x16c140u: goto label_16c140;
        case 0x16c144u: goto label_16c144;
        case 0x16c148u: goto label_16c148;
        case 0x16c14cu: goto label_16c14c;
        case 0x16c150u: goto label_16c150;
        case 0x16c154u: goto label_16c154;
        case 0x16c158u: goto label_16c158;
        case 0x16c15cu: goto label_16c15c;
        case 0x16c160u: goto label_16c160;
        case 0x16c164u: goto label_16c164;
        case 0x16c168u: goto label_16c168;
        case 0x16c16cu: goto label_16c16c;
        case 0x16c170u: goto label_16c170;
        case 0x16c174u: goto label_16c174;
        case 0x16c178u: goto label_16c178;
        case 0x16c17cu: goto label_16c17c;
        case 0x16c180u: goto label_16c180;
        case 0x16c184u: goto label_16c184;
        case 0x16c188u: goto label_16c188;
        case 0x16c18cu: goto label_16c18c;
        case 0x16c190u: goto label_16c190;
        case 0x16c194u: goto label_16c194;
        case 0x16c198u: goto label_16c198;
        case 0x16c19cu: goto label_16c19c;
        case 0x16c1a0u: goto label_16c1a0;
        case 0x16c1a4u: goto label_16c1a4;
        case 0x16c1a8u: goto label_16c1a8;
        case 0x16c1acu: goto label_16c1ac;
        case 0x16c1b0u: goto label_16c1b0;
        case 0x16c1b4u: goto label_16c1b4;
        case 0x16c1b8u: goto label_16c1b8;
        case 0x16c1bcu: goto label_16c1bc;
        case 0x16c1c0u: goto label_16c1c0;
        case 0x16c1c4u: goto label_16c1c4;
        case 0x16c1c8u: goto label_16c1c8;
        case 0x16c1ccu: goto label_16c1cc;
        case 0x16c1d0u: goto label_16c1d0;
        case 0x16c1d4u: goto label_16c1d4;
        case 0x16c1d8u: goto label_16c1d8;
        case 0x16c1dcu: goto label_16c1dc;
        case 0x16c1e0u: goto label_16c1e0;
        case 0x16c1e4u: goto label_16c1e4;
        case 0x16c1e8u: goto label_16c1e8;
        case 0x16c1ecu: goto label_16c1ec;
        case 0x16c1f0u: goto label_16c1f0;
        case 0x16c1f4u: goto label_16c1f4;
        case 0x16c1f8u: goto label_16c1f8;
        case 0x16c1fcu: goto label_16c1fc;
        case 0x16c200u: goto label_16c200;
        case 0x16c204u: goto label_16c204;
        case 0x16c208u: goto label_16c208;
        case 0x16c20cu: goto label_16c20c;
        case 0x16c210u: goto label_16c210;
        case 0x16c214u: goto label_16c214;
        case 0x16c218u: goto label_16c218;
        case 0x16c21cu: goto label_16c21c;
        case 0x16c220u: goto label_16c220;
        case 0x16c224u: goto label_16c224;
        case 0x16c228u: goto label_16c228;
        case 0x16c22cu: goto label_16c22c;
        case 0x16c230u: goto label_16c230;
        case 0x16c234u: goto label_16c234;
        case 0x16c238u: goto label_16c238;
        case 0x16c23cu: goto label_16c23c;
        case 0x16c240u: goto label_16c240;
        case 0x16c244u: goto label_16c244;
        case 0x16c248u: goto label_16c248;
        case 0x16c24cu: goto label_16c24c;
        case 0x16c250u: goto label_16c250;
        case 0x16c254u: goto label_16c254;
        case 0x16c258u: goto label_16c258;
        case 0x16c25cu: goto label_16c25c;
        case 0x16c260u: goto label_16c260;
        case 0x16c264u: goto label_16c264;
        case 0x16c268u: goto label_16c268;
        case 0x16c26cu: goto label_16c26c;
        case 0x16c270u: goto label_16c270;
        case 0x16c274u: goto label_16c274;
        case 0x16c278u: goto label_16c278;
        case 0x16c27cu: goto label_16c27c;
        case 0x16c280u: goto label_16c280;
        case 0x16c284u: goto label_16c284;
        case 0x16c288u: goto label_16c288;
        case 0x16c28cu: goto label_16c28c;
        case 0x16c290u: goto label_16c290;
        case 0x16c294u: goto label_16c294;
        case 0x16c298u: goto label_16c298;
        case 0x16c29cu: goto label_16c29c;
        case 0x16c2a0u: goto label_16c2a0;
        case 0x16c2a4u: goto label_16c2a4;
        case 0x16c2a8u: goto label_16c2a8;
        case 0x16c2acu: goto label_16c2ac;
        case 0x16c2b0u: goto label_16c2b0;
        case 0x16c2b4u: goto label_16c2b4;
        case 0x16c2b8u: goto label_16c2b8;
        case 0x16c2bcu: goto label_16c2bc;
        case 0x16c2c0u: goto label_16c2c0;
        case 0x16c2c4u: goto label_16c2c4;
        case 0x16c2c8u: goto label_16c2c8;
        case 0x16c2ccu: goto label_16c2cc;
        case 0x16c2d0u: goto label_16c2d0;
        case 0x16c2d4u: goto label_16c2d4;
        case 0x16c2d8u: goto label_16c2d8;
        case 0x16c2dcu: goto label_16c2dc;
        case 0x16c2e0u: goto label_16c2e0;
        case 0x16c2e4u: goto label_16c2e4;
        case 0x16c2e8u: goto label_16c2e8;
        case 0x16c2ecu: goto label_16c2ec;
        case 0x16c2f0u: goto label_16c2f0;
        case 0x16c2f4u: goto label_16c2f4;
        case 0x16c2f8u: goto label_16c2f8;
        case 0x16c2fcu: goto label_16c2fc;
        case 0x16c300u: goto label_16c300;
        case 0x16c304u: goto label_16c304;
        case 0x16c308u: goto label_16c308;
        case 0x16c30cu: goto label_16c30c;
        case 0x16c310u: goto label_16c310;
        case 0x16c314u: goto label_16c314;
        case 0x16c318u: goto label_16c318;
        case 0x16c31cu: goto label_16c31c;
        case 0x16c320u: goto label_16c320;
        case 0x16c324u: goto label_16c324;
        case 0x16c328u: goto label_16c328;
        case 0x16c32cu: goto label_16c32c;
        case 0x16c330u: goto label_16c330;
        case 0x16c334u: goto label_16c334;
        case 0x16c338u: goto label_16c338;
        case 0x16c33cu: goto label_16c33c;
        case 0x16c340u: goto label_16c340;
        case 0x16c344u: goto label_16c344;
        case 0x16c348u: goto label_16c348;
        case 0x16c34cu: goto label_16c34c;
        case 0x16c350u: goto label_16c350;
        case 0x16c354u: goto label_16c354;
        case 0x16c358u: goto label_16c358;
        case 0x16c35cu: goto label_16c35c;
        case 0x16c360u: goto label_16c360;
        case 0x16c364u: goto label_16c364;
        case 0x16c368u: goto label_16c368;
        case 0x16c36cu: goto label_16c36c;
        default: break;
    }

    ctx->pc = 0x16c100u;

label_16c100:
    // 0x16c100: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x16c100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_16c104:
    // 0x16c104: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16c104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16c108:
    // 0x16c108: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x16c108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_16c10c:
    // 0x16c10c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x16c10cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_16c110:
    // 0x16c110: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16c110u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_16c114:
    // 0x16c114: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x16c114u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_16c118:
    // 0x16c118: 0x8c8301d4  lw          $v1, 0x1D4($a0)
    ctx->pc = 0x16c118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 468)));
label_16c11c:
    // 0x16c11c: 0x1462001e  bne         $v1, $v0, . + 4 + (0x1E << 2)
label_16c120:
    if (ctx->pc == 0x16C120u) {
        ctx->pc = 0x16C120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C11Cu;
        // 0x16c120: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C124u;
        goto label_16c124;
    }
    ctx->pc = 0x16C11Cu;
    {
        const bool branch_taken_0x16c11c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x16C120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C11Cu;
        // 0x16c120: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c11c) {
            ctx->pc = 0x16C198u;
            goto label_16c198;
        }
    }
    ctx->pc = 0x16C124u;
label_16c124:
    // 0x16c124: 0xae000284  sw          $zero, 0x284($s0)
    ctx->pc = 0x16c124u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 644), GPR_U32(ctx, 0));
label_16c128:
    // 0x16c128: 0xae000280  sw          $zero, 0x280($s0)
    ctx->pc = 0x16c128u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 640), GPR_U32(ctx, 0));
label_16c12c:
    // 0x16c12c: 0xc60101c0  lwc1        $f1, 0x1C0($s0)
    ctx->pc = 0x16c12cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_16c130:
    // 0x16c130: 0xc6200200  lwc1        $f0, 0x200($s1)
    ctx->pc = 0x16c130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_16c134:
    // 0x16c134: 0xc082520  jal         func_209480
label_16c138:
    if (ctx->pc == 0x16C138u) {
        ctx->pc = 0x16C138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C134u;
        // 0x16c138: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C13Cu;
        goto label_16c13c;
    }
    ctx->pc = 0x16C134u;
    SET_GPR_U32(ctx, 31, 0x16C13Cu);
    ctx->pc = 0x16C138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C134u;
    // 0x16c138: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x209480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x209480u, 0x16C134u, 0x16C13Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C13Cu;
label_16c13c:
    // 0x16c13c: 0x3c043f50  lui         $a0, 0x3F50
    ctx->pc = 0x16c13cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16208 << 16));
label_16c140:
    // 0x16c140: 0x3403d2f1  ori         $v1, $zero, 0xD2F1
    ctx->pc = 0x16c140u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)54001);
label_16c144:
    // 0x16c144: 0x3484624d  ori         $a0, $a0, 0x624D
    ctx->pc = 0x16c144u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)25165);
label_16c148:
    // 0x16c148: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x16c148u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_16c14c:
    // 0x16c14c: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x16c14cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_16c150:
    // 0x16c150: 0x3463a9fc  ori         $v1, $v1, 0xA9FC
    ctx->pc = 0x16c150u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43516);
label_16c154:
    // 0x16c154: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x16c154u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_16c158:
    // 0x16c158: 0xc081ffe  jal         func_207FF8
label_16c15c:
    if (ctx->pc == 0x16C15Cu) {
        ctx->pc = 0x16C15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C158u;
        // 0x16c15c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C160u;
        goto label_16c160;
    }
    ctx->pc = 0x16C158u;
    SET_GPR_U32(ctx, 31, 0x16C160u);
    ctx->pc = 0x16C15Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C158u;
    // 0x16c15c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207FF8u, 0x16C158u, 0x16C160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C160u;
label_16c160:
    // 0x16c160: 0xc082222  jal         func_208888
label_16c164:
    if (ctx->pc == 0x16C164u) {
        ctx->pc = 0x16C164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C160u;
        // 0x16c164: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C168u;
        goto label_16c168;
    }
    ctx->pc = 0x16C160u;
    SET_GPR_U32(ctx, 31, 0x16C168u);
    ctx->pc = 0x16C164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C160u;
    // 0x16c164: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208888u, 0x16C160u, 0x16C168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C168u;
label_16c168:
    // 0x16c168: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x16c168u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_16c16c:
    // 0x16c16c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x16c16cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_16c170:
    // 0x16c170: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x16c170u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_16c174:
    // 0x16c174: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16c174u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16c178:
    // 0x16c178: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x16c178u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_16c17c:
    // 0x16c17c: 0xae020300  sw          $v0, 0x300($s0)
    ctx->pc = 0x16c17cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 768), GPR_U32(ctx, 2));
label_16c180:
    // 0x16c180: 0xae000304  sw          $zero, 0x304($s0)
    ctx->pc = 0x16c180u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 772), GPR_U32(ctx, 0));
label_16c184:
    // 0x16c184: 0xae000308  sw          $zero, 0x308($s0)
    ctx->pc = 0x16c184u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 776), GPR_U32(ctx, 0));
label_16c188:
    // 0x16c188: 0x8e390008  lw          $t9, 0x8($s1)
    ctx->pc = 0x16c188u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_16c18c:
    // 0x16c18c: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x16c18cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_16c190:
    // 0x16c190: 0x320f809  jalr        $t9
label_16c194:
    if (ctx->pc == 0x16C194u) {
        ctx->pc = 0x16C194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C190u;
        // 0x16c194: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C198u;
        goto label_16c198;
    }
    ctx->pc = 0x16C190u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16C198u);
        ctx->pc = 0x16C194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C190u;
        // 0x16c194: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16C190u, 0x16C198u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16C198u;
label_16c198:
    // 0x16c198: 0x8e220230  lw          $v0, 0x230($s1)
    ctx->pc = 0x16c198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 560)));
label_16c19c:
    // 0x16c19c: 0x1440006e  bnez        $v0, . + 4 + (0x6E << 2)
label_16c1a0:
    if (ctx->pc == 0x16C1A0u) {
        ctx->pc = 0x16C1A4u;
        goto label_16c1a4;
    }
    ctx->pc = 0x16C19Cu;
    {
        const bool branch_taken_0x16c19c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16c19c) {
            ctx->pc = 0x16C358u;
            goto label_16c358;
        }
    }
    ctx->pc = 0x16C1A4u;
label_16c1a4:
    // 0x16c1a4: 0x8e2301d4  lw          $v1, 0x1D4($s1)
    ctx->pc = 0x16c1a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 468)));
label_16c1a8:
    // 0x16c1a8: 0x14600065  bnez        $v1, . + 4 + (0x65 << 2)
label_16c1ac:
    if (ctx->pc == 0x16C1ACu) {
        ctx->pc = 0x16C1B0u;
        goto label_16c1b0;
    }
    ctx->pc = 0x16C1A8u;
    {
        const bool branch_taken_0x16c1a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16c1a8) {
            ctx->pc = 0x16C340u;
            goto label_16c340;
        }
    }
    ctx->pc = 0x16C1B0u;
label_16c1b0:
    // 0x16c1b0: 0xc60c01c0  lwc1        $f12, 0x1C0($s0)
    ctx->pc = 0x16c1b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_16c1b4:
    // 0x16c1b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16c1b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16c1b8:
    // 0x16c1b8: 0xc62d0200  lwc1        $f13, 0x200($s1)
    ctx->pc = 0x16c1b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_16c1bc:
    // 0x16c1bc: 0x26050300  addiu       $a1, $s0, 0x300
    ctx->pc = 0x16c1bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 768));
label_16c1c0:
    // 0x16c1c0: 0x26060310  addiu       $a2, $s0, 0x310
    ctx->pc = 0x16c1c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 784));
label_16c1c4:
    // 0x16c1c4: 0xc055038  jal         func_1540E0
label_16c1c8:
    if (ctx->pc == 0x16C1C8u) {
        ctx->pc = 0x16C1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C1C4u;
        // 0x16c1c8: 0x27a70030  addiu       $a3, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C1CCu;
        goto label_16c1cc;
    }
    ctx->pc = 0x16C1C4u;
    SET_GPR_U32(ctx, 31, 0x16C1CCu);
    ctx->pc = 0x16C1C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C1C4u;
    // 0x16c1c8: 0x27a70030  addiu       $a3, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1540E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1540E0u, 0x16C1C4u, 0x16C1CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C1CCu;
label_16c1cc:
    // 0x16c1cc: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x16c1ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_16c1d0:
    // 0x16c1d0: 0x0  nop
    ctx->pc = 0x16c1d0u;
    // NOP
label_16c1d4:
    // 0x16c1d4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x16c1d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16c1d8:
    // 0x16c1d8: 0x0  nop
    ctx->pc = 0x16c1d8u;
    // NOP
label_16c1dc:
    // 0x16c1dc: 0x45010056  bc1t        . + 4 + (0x56 << 2)
label_16c1e0:
    if (ctx->pc == 0x16C1E0u) {
        ctx->pc = 0x16C1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C1DCu;
        // 0x16c1e0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C1E4u;
        goto label_16c1e4;
    }
    ctx->pc = 0x16C1DCu;
    {
        const bool branch_taken_0x16c1dc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x16C1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C1DCu;
        // 0x16c1e0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c1dc) {
            ctx->pc = 0x16C338u;
            goto label_16c338;
        }
    }
    ctx->pc = 0x16C1E4u;
label_16c1e4:
    // 0x16c1e4: 0xc6210210  lwc1        $f1, 0x210($s1)
    ctx->pc = 0x16c1e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_16c1e8:
    // 0x16c1e8: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x16c1e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_16c1ec:
    // 0x16c1ec: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x16c1ecu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_16c1f0:
    // 0x16c1f0: 0x46000045  abs.s       $f1, $f0
    ctx->pc = 0x16c1f0u;
    ctx->f[1] = FPU_ABS_S(ctx->f[0]);
label_16c1f4:
    // 0x16c1f4: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x16c1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_16c1f8:
    // 0x16c1f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16c1f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16c1fc:
    // 0x16c1fc: 0x0  nop
    ctx->pc = 0x16c1fcu;
    // NOP
label_16c200:
    // 0x16c200: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x16c200u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16c204:
    // 0x16c204: 0x0  nop
    ctx->pc = 0x16c204u;
    // NOP
label_16c208:
    // 0x16c208: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_16c20c:
    if (ctx->pc == 0x16C20Cu) {
        ctx->pc = 0x16C20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C208u;
        // 0x16c20c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C210u;
        goto label_16c210;
    }
    ctx->pc = 0x16C208u;
    {
        const bool branch_taken_0x16c208 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x16C20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C208u;
        // 0x16c20c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c208) {
            ctx->pc = 0x16C214u;
            goto label_16c214;
        }
    }
    ctx->pc = 0x16C210u;
label_16c210:
    // 0x16c210: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16c210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16c214:
    // 0x16c214: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x16c214u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16c218:
    // 0x16c218: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
label_16c21c:
    if (ctx->pc == 0x16C21Cu) {
        ctx->pc = 0x16C220u;
        goto label_16c220;
    }
    ctx->pc = 0x16C218u;
    {
        const bool branch_taken_0x16c218 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x16c218) {
            ctx->pc = 0x16C22Cu;
            goto label_16c22c;
        }
    }
    ctx->pc = 0x16C220u;
label_16c220:
    // 0x16c220: 0xc6200210  lwc1        $f0, 0x210($s1)
    ctx->pc = 0x16c220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_16c224:
    // 0x16c224: 0x10000014  b           . + 4 + (0x14 << 2)
label_16c228:
    if (ctx->pc == 0x16C228u) {
        ctx->pc = 0x16C228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C224u;
        // 0x16c228: 0xe620022c  swc1        $f0, 0x22C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 556), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C22Cu;
        goto label_16c22c;
    }
    ctx->pc = 0x16C224u;
    {
        const bool branch_taken_0x16c224 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C224u;
        // 0x16c228: 0xe620022c  swc1        $f0, 0x22C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 556), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c224) {
            ctx->pc = 0x16C278u;
            goto label_16c278;
        }
    }
    ctx->pc = 0x16C22Cu;
label_16c22c:
    // 0x16c22c: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x16c22cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_16c230:
    // 0x16c230: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x16c230u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16c234:
    // 0x16c234: 0x0  nop
    ctx->pc = 0x16c234u;
    // NOP
label_16c238:
    // 0x16c238: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x16c238u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_16c23c:
    // 0x16c23c: 0x46000045  abs.s       $f1, $f0
    ctx->pc = 0x16c23cu;
    ctx->f[1] = FPU_ABS_S(ctx->f[0]);
label_16c240:
    // 0x16c240: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x16c240u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_16c244:
    // 0x16c244: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16c244u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16c248:
    // 0x16c248: 0x0  nop
    ctx->pc = 0x16c248u;
    // NOP
label_16c24c:
    // 0x16c24c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x16c24cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16c250:
    // 0x16c250: 0x0  nop
    ctx->pc = 0x16c250u;
    // NOP
label_16c254:
    // 0x16c254: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_16c258:
    if (ctx->pc == 0x16C258u) {
        ctx->pc = 0x16C25Cu;
        goto label_16c25c;
    }
    ctx->pc = 0x16C254u;
    {
        const bool branch_taken_0x16c254 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16c254) {
            ctx->pc = 0x16C264u;
            goto label_16c264;
        }
    }
    ctx->pc = 0x16C25Cu;
label_16c25c:
    // 0x16c25c: 0x10000003  b           . + 4 + (0x3 << 2)
label_16c260:
    if (ctx->pc == 0x16C260u) {
        ctx->pc = 0x16C260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C25Cu;
        // 0x16c260: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C264u;
        goto label_16c264;
    }
    ctx->pc = 0x16C25Cu;
    {
        const bool branch_taken_0x16c25c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C25Cu;
        // 0x16c260: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c25c) {
            ctx->pc = 0x16C26Cu;
            goto label_16c26c;
        }
    }
    ctx->pc = 0x16C264u;
label_16c264:
    // 0x16c264: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x16c264u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16c268:
    // 0x16c268: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16c268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16c26c:
    // 0x16c26c: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_16c270:
    if (ctx->pc == 0x16C270u) {
        ctx->pc = 0x16C274u;
        goto label_16c274;
    }
    ctx->pc = 0x16C26Cu;
    {
        const bool branch_taken_0x16c26c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x16c26c) {
            ctx->pc = 0x16C278u;
            goto label_16c278;
        }
    }
    ctx->pc = 0x16C274u;
label_16c274:
    // 0x16c274: 0xae20022c  sw          $zero, 0x22C($s1)
    ctx->pc = 0x16c274u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 556), GPR_U32(ctx, 0));
label_16c278:
    // 0x16c278: 0xc60d0000  lwc1        $f13, 0x0($s0)
    ctx->pc = 0x16c278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_16c27c:
    // 0x16c27c: 0xc07ef40  jal         func_1FBD00
label_16c280:
    if (ctx->pc == 0x16C280u) {
        ctx->pc = 0x16C280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C27Cu;
        // 0x16c280: 0xc60c0008  lwc1        $f12, 0x8($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C284u;
        goto label_16c284;
    }
    ctx->pc = 0x16C27Cu;
    SET_GPR_U32(ctx, 31, 0x16C284u);
    ctx->pc = 0x16C280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C27Cu;
    // 0x16c280: 0xc60c0008  lwc1        $f12, 0x8($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBD00u, 0x16C27Cu, 0x16C284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C284u;
label_16c284:
    // 0x16c284: 0x3c033f49  lui         $v1, 0x3F49
    ctx->pc = 0x16c284u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16201 << 16));
label_16c288:
    // 0x16c288: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x16c288u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_16c28c:
    // 0x16c28c: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x16c28cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_16c290:
    // 0x16c290: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x16c290u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_16c294:
    // 0x16c294: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x16c294u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_16c298:
    // 0x16c298: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x16c298u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_16c29c:
    // 0x16c29c: 0x10000002  b           . + 4 + (0x2 << 2)
label_16c2a0:
    if (ctx->pc == 0x16C2A0u) {
        ctx->pc = 0x16C2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C29Cu;
        // 0x16c2a0: 0x46020000  add.s       $f0, $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C2A4u;
        goto label_16c2a4;
    }
    ctx->pc = 0x16C29Cu;
    {
        const bool branch_taken_0x16c29c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C29Cu;
        // 0x16c2a0: 0x46020000  add.s       $f0, $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c29c) {
            ctx->pc = 0x16C2A8u;
            goto label_16c2a8;
        }
    }
    ctx->pc = 0x16C2A4u;
label_16c2a4:
    // 0x16c2a4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x16c2a4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_16c2a8:
    // 0x16c2a8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x16c2a8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16c2ac:
    // 0x16c2ac: 0x0  nop
    ctx->pc = 0x16c2acu;
    // NOP
label_16c2b0:
    // 0x16c2b0: 0x0  nop
    ctx->pc = 0x16c2b0u;
    // NOP
label_16c2b4:
    // 0x16c2b4: 0x4500fffb  bc1f        . + 4 + (-0x5 << 2)
label_16c2b8:
    if (ctx->pc == 0x16C2B8u) {
        ctx->pc = 0x16C2BCu;
        goto label_16c2bc;
    }
    ctx->pc = 0x16C2B4u;
    {
        const bool branch_taken_0x16c2b4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16c2b4) {
            ctx->pc = 0x16C2A4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16c2a4;
        }
    }
    ctx->pc = 0x16C2BCu;
label_16c2bc:
    // 0x16c2bc: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x16c2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_16c2c0:
    // 0x16c2c0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x16c2c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_16c2c4:
    // 0x16c2c4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x16c2c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_16c2c8:
    // 0x16c2c8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x16c2c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_16c2cc:
    // 0x16c2cc: 0x10000002  b           . + 4 + (0x2 << 2)
label_16c2d0:
    if (ctx->pc == 0x16C2D0u) {
        ctx->pc = 0x16C2D4u;
        goto label_16c2d4;
    }
    ctx->pc = 0x16C2CCu;
    {
        const bool branch_taken_0x16c2cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16c2cc) {
            ctx->pc = 0x16C2D8u;
            goto label_16c2d8;
        }
    }
    ctx->pc = 0x16C2D4u;
label_16c2d4:
    // 0x16c2d4: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x16c2d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_16c2d8:
    // 0x16c2d8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x16c2d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16c2dc:
    // 0x16c2dc: 0x0  nop
    ctx->pc = 0x16c2dcu;
    // NOP
label_16c2e0:
    // 0x16c2e0: 0x0  nop
    ctx->pc = 0x16c2e0u;
    // NOP
label_16c2e4:
    // 0x16c2e4: 0x4501fffb  bc1t        . + 4 + (-0x5 << 2)
label_16c2e8:
    if (ctx->pc == 0x16C2E8u) {
        ctx->pc = 0x16C2ECu;
        goto label_16c2ec;
    }
    ctx->pc = 0x16C2E4u;
    {
        const bool branch_taken_0x16c2e4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x16c2e4) {
            ctx->pc = 0x16C2D4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16c2d4;
        }
    }
    ctx->pc = 0x16C2ECu;
label_16c2ec:
    // 0x16c2ec: 0xc6210228  lwc1        $f1, 0x228($s1)
    ctx->pc = 0x16c2ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_16c2f0:
    // 0x16c2f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16c2f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16c2f4:
    // 0x16c2f4: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x16c2f4u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_16c2f8:
    // 0x16c2f8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x16c2f8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_16c2fc:
    // 0x16c2fc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x16c2fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_16c300:
    // 0x16c300: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x16c300u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_16c304:
    // 0x16c304: 0xc055c40  jal         func_157100
label_16c308:
    if (ctx->pc == 0x16C308u) {
        ctx->pc = 0x16C308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C304u;
        // 0x16c308: 0xe6200224  swc1        $f0, 0x224($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 548), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C30Cu;
        goto label_16c30c;
    }
    ctx->pc = 0x16C304u;
    SET_GPR_U32(ctx, 31, 0x16C30Cu);
    ctx->pc = 0x16C308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C304u;
    // 0x16c308: 0xe6200224  swc1        $f0, 0x224($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 548), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x157100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157100u, 0x16C304u, 0x16C30Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C30Cu;
label_16c30c:
    // 0x16c30c: 0x8e390008  lw          $t9, 0x8($s1)
    ctx->pc = 0x16c30cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_16c310:
    // 0x16c310: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16c310u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16c314:
    // 0x16c314: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x16c314u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_16c318:
    // 0x16c318: 0x320f809  jalr        $t9
label_16c31c:
    if (ctx->pc == 0x16C31Cu) {
        ctx->pc = 0x16C31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C318u;
        // 0x16c31c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C320u;
        goto label_16c320;
    }
    ctx->pc = 0x16C318u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16C320u);
        ctx->pc = 0x16C31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C318u;
        // 0x16c31c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16C318u, 0x16C320u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16C320u;
label_16c320:
    // 0x16c320: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16c320u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16c324:
    // 0x16c324: 0xc042118  jal         func_108460
label_16c328:
    if (ctx->pc == 0x16C328u) {
        ctx->pc = 0x16C328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C324u;
        // 0x16c328: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C32Cu;
        goto label_16c32c;
    }
    ctx->pc = 0x16C324u;
    SET_GPR_U32(ctx, 31, 0x16C32Cu);
    ctx->pc = 0x16C328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C324u;
    // 0x16c328: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x16C324u, 0x16C32Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C32Cu;
label_16c32c:
    // 0x16c32c: 0xae300230  sw          $s0, 0x230($s1)
    ctx->pc = 0x16c32cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 560), GPR_U32(ctx, 16));
label_16c330:
    // 0x16c330: 0x1000000a  b           . + 4 + (0xA << 2)
label_16c334:
    if (ctx->pc == 0x16C334u) {
        ctx->pc = 0x16C334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C330u;
        // 0x16c334: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C338u;
        goto label_16c338;
    }
    ctx->pc = 0x16C330u;
    {
        const bool branch_taken_0x16c330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C330u;
        // 0x16c334: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c330) {
            ctx->pc = 0x16C35Cu;
            goto label_16c35c;
        }
    }
    ctx->pc = 0x16C338u;
label_16c338:
    // 0x16c338: 0x10000009  b           . + 4 + (0x9 << 2)
label_16c33c:
    if (ctx->pc == 0x16C33Cu) {
        ctx->pc = 0x16C33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C338u;
        // 0x16c33c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C340u;
        goto label_16c340;
    }
    ctx->pc = 0x16C338u;
    {
        const bool branch_taken_0x16c338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C338u;
        // 0x16c33c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c338) {
            ctx->pc = 0x16C360u;
            goto label_16c360;
        }
    }
    ctx->pc = 0x16C340u;
label_16c340:
    // 0x16c340: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_16c344:
    if (ctx->pc == 0x16C344u) {
        ctx->pc = 0x16C344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C340u;
        // 0x16c344: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C348u;
        goto label_16c348;
    }
    ctx->pc = 0x16C340u;
    {
        const bool branch_taken_0x16c340 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16C344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C340u;
        // 0x16c344: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c340) {
            ctx->pc = 0x16C358u;
            goto label_16c358;
        }
    }
    ctx->pc = 0x16C348u;
label_16c348:
    // 0x16c348: 0xc059990  jal         func_166640
label_16c34c:
    if (ctx->pc == 0x16C34Cu) {
        ctx->pc = 0x16C34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C348u;
        // 0x16c34c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C350u;
        goto label_16c350;
    }
    ctx->pc = 0x16C348u;
    SET_GPR_U32(ctx, 31, 0x16C350u);
    ctx->pc = 0x16C34Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C348u;
    // 0x16c34c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x166640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166640u, 0x16C348u, 0x16C350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C350u;
label_16c350:
    // 0x16c350: 0x10000002  b           . + 4 + (0x2 << 2)
label_16c354:
    if (ctx->pc == 0x16C354u) {
        ctx->pc = 0x16C358u;
        goto label_16c358;
    }
    ctx->pc = 0x16C350u;
    {
        const bool branch_taken_0x16c350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16c350) {
            ctx->pc = 0x16C35Cu;
            goto label_16c35c;
        }
    }
    ctx->pc = 0x16C358u;
label_16c358:
    // 0x16c358: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x16c358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_16c35c:
    // 0x16c35c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x16c35cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_16c360:
    // 0x16c360: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x16c360u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_16c364:
    // 0x16c364: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16c364u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_16c368:
    // 0x16c368: 0x3e00008  jr          $ra
label_16c36c:
    if (ctx->pc == 0x16C36Cu) {
        ctx->pc = 0x16C36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C368u;
        // 0x16c36c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C370u;
        goto label_fallthrough_0x16c368;
    }
    ctx->pc = 0x16C368u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16C36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C368u;
        // 0x16c36c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16C368u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x16c368:
    ctx->pc = 0x16C370u;
}
