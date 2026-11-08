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

// Function: FUN_001ba8e0
// Address: 0x1ba8e0 - 0x1bac3c
void FUN_001ba8e0_0x1ba8e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ba8e0_0x1ba8e0");
#endif

    ctx->pc = 0x1ba8e0u;

    // 0x1ba8e0: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x1ba8e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1ba8e4: 0x106000d3  beqz        $v1, . + 4 + (0xD3 << 2)
    ctx->pc = 0x1BA8E4u;
    {
        const bool branch_taken_0x1ba8e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ba8e4) {
            ctx->pc = 0x1BAC34u;
            goto label_1bac34;
        }
    }
    ctx->pc = 0x1BA8ECu;
    // 0x1ba8ec: 0xac8500f4  sw          $a1, 0xF4($a0)
    ctx->pc = 0x1ba8ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 244), GPR_U32(ctx, 5));
    // 0x1ba8f0: 0xac8600fc  sw          $a2, 0xFC($a0)
    ctx->pc = 0x1ba8f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 252), GPR_U32(ctx, 6));
    // 0x1ba8f4: 0xac870100  sw          $a3, 0x100($a0)
    ctx->pc = 0x1ba8f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 256), GPR_U32(ctx, 7));
    // 0x1ba8f8: 0xac800110  sw          $zero, 0x110($a0)
    ctx->pc = 0x1ba8f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 272), GPR_U32(ctx, 0));
    // 0x1ba8fc: 0xac800120  sw          $zero, 0x120($a0)
    ctx->pc = 0x1ba8fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 288), GPR_U32(ctx, 0));
    // 0x1ba900: 0xac800114  sw          $zero, 0x114($a0)
    ctx->pc = 0x1ba900u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 276), GPR_U32(ctx, 0));
    // 0x1ba904: 0xac800124  sw          $zero, 0x124($a0)
    ctx->pc = 0x1ba904u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 292), GPR_U32(ctx, 0));
    // 0x1ba908: 0xac800118  sw          $zero, 0x118($a0)
    ctx->pc = 0x1ba908u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 280), GPR_U32(ctx, 0));
    // 0x1ba90c: 0xac800128  sw          $zero, 0x128($a0)
    ctx->pc = 0x1ba90cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 296), GPR_U32(ctx, 0));
    // 0x1ba910: 0xac80011c  sw          $zero, 0x11C($a0)
    ctx->pc = 0x1ba910u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 284), GPR_U32(ctx, 0));
    // 0x1ba914: 0xac80012c  sw          $zero, 0x12C($a0)
    ctx->pc = 0x1ba914u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 300), GPR_U32(ctx, 0));
    // 0x1ba918: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x1ba918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1ba91c: 0xc4630048  lwc1        $f3, 0x48($v1)
    ctx->pc = 0x1ba91cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1ba920: 0xc4610040  lwc1        $f1, 0x40($v1)
    ctx->pc = 0x1ba920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ba924: 0xc4600044  lwc1        $f0, 0x44($v1)
    ctx->pc = 0x1ba924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ba928: 0xc462004c  lwc1        $f2, 0x4C($v1)
    ctx->pc = 0x1ba928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1ba92c: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x1ba92cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x1ba930: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1ba930u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1ba934: 0x46800160  cvt.s.w     $f5, $f0
    ctx->pc = 0x1ba934u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x1ba938: 0x46801120  cvt.s.w     $f4, $f2
    ctx->pc = 0x1ba938u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x1ba93c: 0x46030800  add.s       $f0, $f1, $f3
    ctx->pc = 0x1ba93cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x1ba940: 0xe4810020  swc1        $f1, 0x20($a0)
    ctx->pc = 0x1ba940u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x1ba944: 0xe4800030  swc1        $f0, 0x30($a0)
    ctx->pc = 0x1ba944u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
    // 0x1ba948: 0x46042880  add.s       $f2, $f5, $f4
    ctx->pc = 0x1ba948u;
    ctx->f[2] = FPU_ADD_S(ctx->f[5], ctx->f[4]);
    // 0x1ba94c: 0xe4850024  swc1        $f5, 0x24($a0)
    ctx->pc = 0x1ba94cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
    // 0x1ba950: 0xe4820034  swc1        $f2, 0x34($a0)
    ctx->pc = 0x1ba950u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 52), bits); }
    // 0x1ba954: 0x8c8300f4  lw          $v1, 0xF4($a0)
    ctx->pc = 0x1ba954u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 244)));
    // 0x1ba958: 0x2c61000f  sltiu       $at, $v1, 0xF
    ctx->pc = 0x1ba958u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)15) ? 1 : 0);
    // 0x1ba95c: 0x102000b5  beqz        $at, . + 4 + (0xB5 << 2)
    ctx->pc = 0x1BA95Cu;
    {
        const bool branch_taken_0x1ba95c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ba95c) {
            ctx->pc = 0x1BAC34u;
            goto label_1bac34;
        }
    }
    ctx->pc = 0x1BA964u;
    // 0x1ba964: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1ba964u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1ba968: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1ba968u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1ba96c: 0x24a51080  addiu       $a1, $a1, 0x1080
    ctx->pc = 0x1ba96cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4224));
    // 0x1ba970: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1ba970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1ba974: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1ba974u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ba978: 0x600008  jr          $v1
    ctx->pc = 0x1BA978u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BA980u: goto label_1ba980;
            case 0x1BA9A0u: goto label_1ba9a0;
            case 0x1BA9C0u: goto label_1ba9c0;
            case 0x1BA9E4u: goto label_1ba9e4;
            case 0x1BAA04u: goto label_1baa04;
            case 0x1BAA28u: goto label_1baa28;
            case 0x1BAA48u: goto label_1baa48;
            case 0x1BAA6Cu: goto label_1baa6c;
            case 0x1BAA8Cu: goto label_1baa8c;
            case 0x1BAACCu: goto label_1baacc;
            case 0x1BAB08u: goto label_1bab08;
            case 0x1BAB48u: goto label_1bab48;
            case 0x1BAB84u: goto label_1bab84;
            case 0x1BABECu: goto label_1babec;
            case 0x1BAC34u: goto label_1bac34;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BA978u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1BA980u;
label_1ba980:
    // 0x1ba980: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x1ba980u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ba984: 0xe4850034  swc1        $f5, 0x34($a0)
    ctx->pc = 0x1ba984u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 52), bits); }
    // 0x1ba988: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ba988u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1ba98c: 0x46002003  div.s       $f0, $f4, $f0
    ctx->pc = 0x1ba98cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[4], ctx->f[0]); }
    // 0x1ba990: 0x0  nop
    ctx->pc = 0x1ba990u;
    // NOP
    // 0x1ba994: 0x0  nop
    ctx->pc = 0x1ba994u;
    // NOP
    // 0x1ba998: 0x100000a6  b           . + 4 + (0xA6 << 2)
    ctx->pc = 0x1BA998u;
    {
        const bool branch_taken_0x1ba998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA998u;
        // 0x1ba99c: 0xe4800124  swc1        $f0, 0x124($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 292), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba998) {
            ctx->pc = 0x1BAC34u;
            goto label_1bac34;
        }
    }
    ctx->pc = 0x1BA9A0u;
label_1ba9a0:
    // 0x1ba9a0: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x1ba9a0u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ba9a4: 0x46002047  neg.s       $f1, $f4
    ctx->pc = 0x1ba9a4u;
    ctx->f[1] = FPU_NEG_S(ctx->f[4]);
    // 0x1ba9a8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ba9a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1ba9ac: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1ba9acu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1ba9b0: 0x0  nop
    ctx->pc = 0x1ba9b0u;
    // NOP
    // 0x1ba9b4: 0x0  nop
    ctx->pc = 0x1ba9b4u;
    // NOP
    // 0x1ba9b8: 0x1000009e  b           . + 4 + (0x9E << 2)
    ctx->pc = 0x1BA9B8u;
    {
        const bool branch_taken_0x1ba9b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA9B8u;
        // 0x1ba9bc: 0xe4800124  swc1        $f0, 0x124($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 292), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba9b8) {
            ctx->pc = 0x1BAC34u;
            goto label_1bac34;
        }
    }
    ctx->pc = 0x1BA9C0u;
label_1ba9c0:
    // 0x1ba9c0: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x1ba9c0u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ba9c4: 0x46002047  neg.s       $f1, $f4
    ctx->pc = 0x1ba9c4u;
    ctx->f[1] = FPU_NEG_S(ctx->f[4]);
    // 0x1ba9c8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ba9c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1ba9cc: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1ba9ccu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1ba9d0: 0xe4820024  swc1        $f2, 0x24($a0)
    ctx->pc = 0x1ba9d0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
    // 0x1ba9d4: 0x0  nop
    ctx->pc = 0x1ba9d4u;
    // NOP
    // 0x1ba9d8: 0x0  nop
    ctx->pc = 0x1ba9d8u;
    // NOP
    // 0x1ba9dc: 0x10000095  b           . + 4 + (0x95 << 2)
    ctx->pc = 0x1BA9DCu;
    {
        const bool branch_taken_0x1ba9dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA9DCu;
        // 0x1ba9e0: 0xe4800114  swc1        $f0, 0x114($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 276), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba9dc) {
            ctx->pc = 0x1BAC34u;
            goto label_1bac34;
        }
    }
    ctx->pc = 0x1BA9E4u;
label_1ba9e4:
    // 0x1ba9e4: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x1ba9e4u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ba9e8: 0x0  nop
    ctx->pc = 0x1ba9e8u;
    // NOP
    // 0x1ba9ec: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ba9ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1ba9f0: 0x46002003  div.s       $f0, $f4, $f0
    ctx->pc = 0x1ba9f0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[4], ctx->f[0]); }
    // 0x1ba9f4: 0x0  nop
    ctx->pc = 0x1ba9f4u;
    // NOP
    // 0x1ba9f8: 0x0  nop
    ctx->pc = 0x1ba9f8u;
    // NOP
    // 0x1ba9fc: 0x1000008d  b           . + 4 + (0x8D << 2)
    ctx->pc = 0x1BA9FCu;
    {
        const bool branch_taken_0x1ba9fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BAA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA9FCu;
        // 0x1baa00: 0xe4800114  swc1        $f0, 0x114($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 276), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba9fc) {
            ctx->pc = 0x1BAC34u;
            goto label_1bac34;
        }
    }
    ctx->pc = 0x1BAA04u;
label_1baa04:
    // 0x1baa04: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x1baa04u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1baa08: 0x0  nop
    ctx->pc = 0x1baa08u;
    // NOP
    // 0x1baa0c: 0xe4810034  swc1        $f1, 0x34($a0)
    ctx->pc = 0x1baa0cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 52), bits); }
    // 0x1baa10: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1baa10u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1baa14: 0x46001803  div.s       $f0, $f3, $f0
    ctx->pc = 0x1baa14u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[3], ctx->f[0]); }
    // 0x1baa18: 0x0  nop
    ctx->pc = 0x1baa18u;
    // NOP
    // 0x1baa1c: 0x0  nop
    ctx->pc = 0x1baa1cu;
    // NOP
    // 0x1baa20: 0x10000084  b           . + 4 + (0x84 << 2)
    ctx->pc = 0x1BAA20u;
    {
        const bool branch_taken_0x1baa20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BAA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAA20u;
        // 0x1baa24: 0xe4800124  swc1        $f0, 0x124($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 292), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1baa20) {
            ctx->pc = 0x1BAC34u;
            goto label_1bac34;
        }
    }
    ctx->pc = 0x1BAA28u;
label_1baa28:
    // 0x1baa28: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x1baa28u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1baa2c: 0x46001847  neg.s       $f1, $f3
    ctx->pc = 0x1baa2cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[3]);
    // 0x1baa30: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1baa30u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1baa34: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1baa34u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1baa38: 0x0  nop
    ctx->pc = 0x1baa38u;
    // NOP
    // 0x1baa3c: 0x0  nop
    ctx->pc = 0x1baa3cu;
    // NOP
    // 0x1baa40: 0x1000007c  b           . + 4 + (0x7C << 2)
    ctx->pc = 0x1BAA40u;
    {
        const bool branch_taken_0x1baa40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BAA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAA40u;
        // 0x1baa44: 0xe4800124  swc1        $f0, 0x124($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 292), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1baa40) {
            ctx->pc = 0x1BAC34u;
            goto label_1bac34;
        }
    }
    ctx->pc = 0x1BAA48u;
label_1baa48:
    // 0x1baa48: 0xe4800024  swc1        $f0, 0x24($a0)
    ctx->pc = 0x1baa48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
    // 0x1baa4c: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x1baa4cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1baa50: 0x46001847  neg.s       $f1, $f3
    ctx->pc = 0x1baa50u;
    ctx->f[1] = FPU_NEG_S(ctx->f[3]);
    // 0x1baa54: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1baa54u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1baa58: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1baa58u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1baa5c: 0x0  nop
    ctx->pc = 0x1baa5cu;
    // NOP
    // 0x1baa60: 0x0  nop
    ctx->pc = 0x1baa60u;
    // NOP
    // 0x1baa64: 0x10000073  b           . + 4 + (0x73 << 2)
    ctx->pc = 0x1BAA64u;
    {
        const bool branch_taken_0x1baa64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BAA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAA64u;
        // 0x1baa68: 0xe4800114  swc1        $f0, 0x114($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 276), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1baa64) {
            ctx->pc = 0x1BAC34u;
            goto label_1bac34;
        }
    }
    ctx->pc = 0x1BAA6Cu;
label_1baa6c:
    // 0x1baa6c: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x1baa6cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1baa70: 0x0  nop
    ctx->pc = 0x1baa70u;
    // NOP
    // 0x1baa74: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1baa74u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1baa78: 0x46001803  div.s       $f0, $f3, $f0
    ctx->pc = 0x1baa78u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[3], ctx->f[0]); }
    // 0x1baa7c: 0x0  nop
    ctx->pc = 0x1baa7cu;
    // NOP
    // 0x1baa80: 0x0  nop
    ctx->pc = 0x1baa80u;
    // NOP
    // 0x1baa84: 0x1000006b  b           . + 4 + (0x6B << 2)
    ctx->pc = 0x1BAA84u;
    {
        const bool branch_taken_0x1baa84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BAA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAA84u;
        // 0x1baa88: 0xe4800114  swc1        $f0, 0x114($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 276), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1baa84) {
            ctx->pc = 0x1BAC34u;
            goto label_1bac34;
        }
    }
    ctx->pc = 0x1BAA8Cu;
label_1baa8c:
    // 0x1baa8c: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1baa8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1baa90: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x1baa90u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1baa94: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x1baa94u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1baa98: 0x46041943  div.s       $f5, $f3, $f4
    ctx->pc = 0x1baa98u;
    { if (ctx->f[4] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[5] = FPU_DIV_S(ctx->f[3], ctx->f[4]); }
    // 0x1baa9c: 0x46050880  add.s       $f2, $f1, $f5
    ctx->pc = 0x1baa9cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
    // 0x1baaa0: 0x46001847  neg.s       $f1, $f3
    ctx->pc = 0x1baaa0u;
    ctx->f[1] = FPU_NEG_S(ctx->f[3]);
    // 0x1baaa4: 0x46040843  div.s       $f1, $f1, $f4
    ctx->pc = 0x1baaa4u;
    { if (ctx->f[4] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[4]); }
    // 0x1baaa8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1baaa8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1baaac: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1baaacu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1baab0: 0x46002803  div.s       $f0, $f5, $f0
    ctx->pc = 0x1baab0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[5], ctx->f[0]); }
    // 0x1baab4: 0xe4820020  swc1        $f2, 0x20($a0)
    ctx->pc = 0x1baab4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x1baab8: 0xe4820030  swc1        $f2, 0x30($a0)
    ctx->pc = 0x1baab8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
    // 0x1baabc: 0x0  nop
    ctx->pc = 0x1baabcu;
    // NOP
    // 0x1baac0: 0xe4810110  swc1        $f1, 0x110($a0)
    ctx->pc = 0x1baac0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 272), bits); }
    // 0x1baac4: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x1BAAC4u;
    {
        const bool branch_taken_0x1baac4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BAAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAAC4u;
        // 0x1baac8: 0xe4800120  swc1        $f0, 0x120($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 288), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1baac4) {
            ctx->pc = 0x1BAC34u;
            goto label_1bac34;
        }
    }
    ctx->pc = 0x1BAACCu;
label_1baacc:
    // 0x1baacc: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x1baaccu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1baad0: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1baad0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1baad4: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1baad4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1baad8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1baad8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1baadc: 0x46021803  div.s       $f0, $f3, $f2
    ctx->pc = 0x1baadcu;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[3], ctx->f[2]); }
    // 0x1baae0: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1baae0u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1baae4: 0xe4800110  swc1        $f0, 0x110($a0)
    ctx->pc = 0x1baae4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 272), bits); }
    // 0x1baae8: 0x46001807  neg.s       $f0, $f3
    ctx->pc = 0x1baae8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[3]);
    // 0x1baaec: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x1baaecu;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x1baaf0: 0x0  nop
    ctx->pc = 0x1baaf0u;
    // NOP
    // 0x1baaf4: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1baaf4u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1baaf8: 0x0  nop
    ctx->pc = 0x1baaf8u;
    // NOP
    // 0x1baafc: 0x0  nop
    ctx->pc = 0x1baafcu;
    // NOP
    // 0x1bab00: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x1BAB00u;
    {
        const bool branch_taken_0x1bab00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BAB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAB00u;
        // 0x1bab04: 0xe4800120  swc1        $f0, 0x120($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 288), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bab00) {
            ctx->pc = 0x1BAC34u;
            goto label_1bac34;
        }
    }
    ctx->pc = 0x1BAB08u;
label_1bab08:
    // 0x1bab08: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1bab08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1bab0c: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x1bab0cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1bab10: 0x46002047  neg.s       $f1, $f4
    ctx->pc = 0x1bab10u;
    ctx->f[1] = FPU_NEG_S(ctx->f[4]);
    // 0x1bab14: 0x46030843  div.s       $f1, $f1, $f3
    ctx->pc = 0x1bab14u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[3]); }
    // 0x1bab18: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x1bab18u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bab1c: 0x46032183  div.s       $f6, $f4, $f3
    ctx->pc = 0x1bab1cu;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[6] = FPU_DIV_S(ctx->f[4], ctx->f[3]); }
    // 0x1bab20: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1bab20u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1bab24: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1bab24u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1bab28: 0x46062880  add.s       $f2, $f5, $f6
    ctx->pc = 0x1bab28u;
    ctx->f[2] = FPU_ADD_S(ctx->f[5], ctx->f[6]);
    // 0x1bab2c: 0xe4820024  swc1        $f2, 0x24($a0)
    ctx->pc = 0x1bab2cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
    // 0x1bab30: 0x46003003  div.s       $f0, $f6, $f0
    ctx->pc = 0x1bab30u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[6], ctx->f[0]); }
    // 0x1bab34: 0xe4820034  swc1        $f2, 0x34($a0)
    ctx->pc = 0x1bab34u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 52), bits); }
    // 0x1bab38: 0x0  nop
    ctx->pc = 0x1bab38u;
    // NOP
    // 0x1bab3c: 0xe4810114  swc1        $f1, 0x114($a0)
    ctx->pc = 0x1bab3cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 276), bits); }
    // 0x1bab40: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x1BAB40u;
    {
        const bool branch_taken_0x1bab40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BAB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAB40u;
        // 0x1bab44: 0xe4800124  swc1        $f0, 0x124($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 292), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bab40) {
            ctx->pc = 0x1BAC34u;
            goto label_1bac34;
        }
    }
    ctx->pc = 0x1BAB48u;
label_1bab48:
    // 0x1bab48: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x1bab48u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bab4c: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1bab4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1bab50: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1bab50u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1bab54: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1bab54u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1bab58: 0x46022003  div.s       $f0, $f4, $f2
    ctx->pc = 0x1bab58u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[4], ctx->f[2]); }
    // 0x1bab5c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1bab5cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1bab60: 0xe4800114  swc1        $f0, 0x114($a0)
    ctx->pc = 0x1bab60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 276), bits); }
    // 0x1bab64: 0x46002007  neg.s       $f0, $f4
    ctx->pc = 0x1bab64u;
    ctx->f[0] = FPU_NEG_S(ctx->f[4]);
    // 0x1bab68: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x1bab68u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x1bab6c: 0x0  nop
    ctx->pc = 0x1bab6cu;
    // NOP
    // 0x1bab70: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1bab70u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1bab74: 0x0  nop
    ctx->pc = 0x1bab74u;
    // NOP
    // 0x1bab78: 0x0  nop
    ctx->pc = 0x1bab78u;
    // NOP
    // 0x1bab7c: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x1BAB7Cu;
    {
        const bool branch_taken_0x1bab7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BAB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAB7Cu;
        // 0x1bab80: 0xe4800124  swc1        $f0, 0x124($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 292), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bab7c) {
            ctx->pc = 0x1BAC34u;
            goto label_1bac34;
        }
    }
    ctx->pc = 0x1BAB84u;
label_1bab84:
    // 0x1bab84: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x1bab84u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bab88: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1bab88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1bab8c: 0x44833000  mtc1        $v1, $f6
    ctx->pc = 0x1bab8cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x1bab90: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x1bab90u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1bab94: 0x46001807  neg.s       $f0, $f3
    ctx->pc = 0x1bab94u;
    ctx->f[0] = FPU_NEG_S(ctx->f[3]);
    // 0x1bab98: 0x46060003  div.s       $f0, $f0, $f6
    ctx->pc = 0x1bab98u;
    { if (ctx->f[6] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[6]); }
    // 0x1bab9c: 0x460619c3  div.s       $f7, $f3, $f6
    ctx->pc = 0x1bab9cu;
    { if (ctx->f[6] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[7] = FPU_DIV_S(ctx->f[3], ctx->f[6]); }
    // 0x1baba0: 0x46070840  add.s       $f1, $f1, $f7
    ctx->pc = 0x1baba0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[7]);
    // 0x1baba4: 0xe4810020  swc1        $f1, 0x20($a0)
    ctx->pc = 0x1baba4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x1baba8: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x1baba8u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x1babac: 0xe4810030  swc1        $f1, 0x30($a0)
    ctx->pc = 0x1babacu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
    // 0x1babb0: 0xe4800110  swc1        $f0, 0x110($a0)
    ctx->pc = 0x1babb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 272), bits); }
    // 0x1babb4: 0x46023803  div.s       $f0, $f7, $f2
    ctx->pc = 0x1babb4u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[7], ctx->f[2]); }
    // 0x1babb8: 0x460620c3  div.s       $f3, $f4, $f6
    ctx->pc = 0x1babb8u;
    { if (ctx->f[6] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[4], ctx->f[6]); }
    // 0x1babbc: 0xe4800120  swc1        $f0, 0x120($a0)
    ctx->pc = 0x1babbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 288), bits); }
    // 0x1babc0: 0x46002007  neg.s       $f0, $f4
    ctx->pc = 0x1babc0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[4]);
    // 0x1babc4: 0x46032840  add.s       $f1, $f5, $f3
    ctx->pc = 0x1babc4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[5], ctx->f[3]);
    // 0x1babc8: 0xe4810024  swc1        $f1, 0x24($a0)
    ctx->pc = 0x1babc8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
    // 0x1babcc: 0x46060003  div.s       $f0, $f0, $f6
    ctx->pc = 0x1babccu;
    { if (ctx->f[6] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[6]); }
    // 0x1babd0: 0xe4810034  swc1        $f1, 0x34($a0)
    ctx->pc = 0x1babd0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 52), bits); }
    // 0x1babd4: 0x46020043  div.s       $f1, $f0, $f2
    ctx->pc = 0x1babd4u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x1babd8: 0x46021803  div.s       $f0, $f3, $f2
    ctx->pc = 0x1babd8u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[3], ctx->f[2]); }
    // 0x1babdc: 0x0  nop
    ctx->pc = 0x1babdcu;
    // NOP
    // 0x1babe0: 0xe4810114  swc1        $f1, 0x114($a0)
    ctx->pc = 0x1babe0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 276), bits); }
    // 0x1babe4: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1BABE4u;
    {
        const bool branch_taken_0x1babe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BABE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BABE4u;
        // 0x1babe8: 0xe4800124  swc1        $f0, 0x124($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 292), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1babe4) {
            ctx->pc = 0x1BAC34u;
            goto label_1bac34;
        }
    }
    ctx->pc = 0x1BABECu;
label_1babec:
    // 0x1babec: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x1babecu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1babf0: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1babf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1babf4: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1babf4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1babf8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1babf8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1babfc: 0x46021803  div.s       $f0, $f3, $f2
    ctx->pc = 0x1babfcu;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[3], ctx->f[2]); }
    // 0x1bac00: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1bac00u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1bac04: 0xe4800110  swc1        $f0, 0x110($a0)
    ctx->pc = 0x1bac04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 272), bits); }
    // 0x1bac08: 0x46001807  neg.s       $f0, $f3
    ctx->pc = 0x1bac08u;
    ctx->f[0] = FPU_NEG_S(ctx->f[3]);
    // 0x1bac0c: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x1bac0cu;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x1bac10: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1bac10u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1bac14: 0xe4800120  swc1        $f0, 0x120($a0)
    ctx->pc = 0x1bac14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 288), bits); }
    // 0x1bac18: 0x46022003  div.s       $f0, $f4, $f2
    ctx->pc = 0x1bac18u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[4], ctx->f[2]); }
    // 0x1bac1c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1bac1cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1bac20: 0xe4800114  swc1        $f0, 0x114($a0)
    ctx->pc = 0x1bac20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 276), bits); }
    // 0x1bac24: 0x46002007  neg.s       $f0, $f4
    ctx->pc = 0x1bac24u;
    ctx->f[0] = FPU_NEG_S(ctx->f[4]);
    // 0x1bac28: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x1bac28u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x1bac2c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1bac2cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1bac30: 0xe4800124  swc1        $f0, 0x124($a0)
    ctx->pc = 0x1bac30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 292), bits); }
label_1bac34:
    // 0x1bac34: 0x3e00008  jr          $ra
    ctx->pc = 0x1BAC34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BAC34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BAC3Cu;
}
